<?php

/**
 * @file
 * Field handler to present a form field to change quantity of a line item. It's
 * a dummy handler, most part of the implementation is done via post render
 * hook.
 */

/**
 * Field handler to present a field to change quantity of a line item.
 */
class commerce_line_item_handler_field_edit_quantity extends commerce_line_item_handler_field_edit {

  function construct() {
    parent::construct();
    $this->additional_fields['quantity'] = 'quantity';

    // Set real_field in order to make it generate a field_alias.
    $this->real_field = 'quantity';
  }

  function render($values) {
    $line_item_id = $this->get_value($values, 'line_item_id');
    $quantity = $this->get_value($values, 'quantity');

    // Add form that will be used for replacing the placeholder generated bellow
    // at form rendering phase in commerce_line_item_views_post_render().
    $this->form[$line_item_id] = array(
      '#type' => 'textfield',
      '#datatype' => 'integer',
      '#default_value' => round($quantity),
      '#size' => 4,
      '#maxlength' => 8,
    );

    // Return the placeholder that will be used as token for replacing itself
    // with the rendered form field created above.
    return '<!--post-commerce-line-item-edit_quantity-' . $line_item_id . '-->';
  }

  function edit_form_validate($form, &$form_state) {
    foreach (element_children($form['edit_quantity']) as $line_item_id) {
      // Ensure the quantity is actually a numeric value.
      if (!is_numeric($form_state['values']['edit_quantity'][$line_item_id]) || $form_state['values']['edit_quantity'][$line_item_id] < 0) {
        form_set_error('edit_quantity][' . $line_item_id, t('You must specify a positive number for the quantity'));
      }

      // If the custom data type attribute of the quantity element is integer,
      // ensure we only accept whole number values.
      if ($form['edit_quantity'][$line_item_id]['#datatype'] == 'integer' &&
        (int) $form_state['values']['edit_quantity'][$line_item_id] != $form_state['values']['edit_quantity'][$line_item_id]) {
        form_set_error('edit_quantity][' . $line_item_id, t('You must specify a whole number for the quantity.'));
      }
    }
  }

  function edit_form_submit($form, &$form_state) {
    foreach (element_children($form['edit_quantity']) as $line_item_id) {
      // If the line item hasn't been deleted...
      if ($line_item = commerce_line_item_load($line_item_id)) {
        // And the quantity on the form is different...
        if ($form_state['values']['edit_quantity'][$line_item_id] != $line_item->quantity) {
          if ($form_state['values']['edit_quantity'][$line_item_id] == 0) {
            // If the quantity specified is 0, the line item is deleted.
            $order = commerce_order_load($form_state['order']->order_id);
            commerce_cart_order_product_line_item_delete($order, $line_item_id);
          }
          else {
            // Change the quantity and save the line item.
            $line_item->quantity = $form_state['values']['edit_quantity'][$line_item_id];

            commerce_line_item_save($line_item);
            entity_get_controller('commerce_line_item')->resetCache(array($line_item->line_item_id));
          }
        }
      }
    }
  }

}
