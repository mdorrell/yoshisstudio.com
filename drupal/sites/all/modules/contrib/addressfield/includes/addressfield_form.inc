<?php
// $Id: addressfield_form.inc,v 1.2 2010/10/09 03:15:44 rszrama Exp $

/**
 * Interface for an address field form.
 */
interface AddressFieldForm {

  /**
   * Return the edit form for a given address.
   */
  public function form($address, $field, $instance, $langcode, $items, $delta, $element);

}
