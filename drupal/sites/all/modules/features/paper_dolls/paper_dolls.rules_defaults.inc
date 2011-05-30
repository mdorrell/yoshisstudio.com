<?php
/**
 * @file
 * paper_dolls.rules_defaults.inc
 */

/**
 * Implementation of hook_default_rules_configuration().
 */
function paper_dolls_default_rules_configuration() {
  $items = array();
  $items['rules_shipping'] = entity_import('rules_config', '{ "rules_shipping" : {
      "LABEL" : "Shipping",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "commerce_product_reference" ],
      "ON" : [ "commerce_product_calculate_sell_price" ],
      "DO" : []
    }
  }');
  $items['rules_test_shipping'] = entity_import('rules_config', '{ "rules_test_shipping" : {
      "LABEL" : "Test Shipping",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "commerce_checkout" ],
      "ON" : [ "commerce_checkout_complete" ],
      "DO" : []
    }
  }');
  return $items;
}
