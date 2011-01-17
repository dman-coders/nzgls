<?php

/**
 * Implementation of hook_taxonomy_xml_source_default_items().
 */
function nzgls_taxonomy_xml_source_default_items() {
  $settings = array();

  $settings['FONZ'] = array(
    'provider' => 'New Zealand Government Locator Service (NZGLS)',
    'name' => 'Functions Of New Zealand (FONZ)',
    'description' => 'A list of topics and classifications used to describe government departments and administrative tasks. Subjects include terms relating to taxation, healthcare, immigration, defense and law. (209 terms)',
    'about' => 'http://www.e.govt.nz/standards/nzgls/thesauri',
    'servicetype' => 'lookup',
    'protocol' => 'URI',
    'pattern' => 'http://www.e.govt.nz/standards/nzgls/thesauri/fonz2.30.txt/download',
    'format' => 'csv',
    'module' => 'features_FONZ',
  );

  $settings['SONZ'] = array(
    'provider' => 'New Zealand Government Locator Service (NZGLS)',
    'name' => 'Services Of New Zealand (SONZ)',
    'description' => 'A list of topics and classifications used to describe subjects of interest to government and governemnt agencies. Subjects include terms relating to administration, national affairs, education, infrastructure, law, economics and industry. (1551 terms)',
    'about' => 'http://www.e.govt.nz/standards/nzgls/thesauri',
    'servicetype' => 'lookup',
    'protocol' => 'URI',
    'pattern' => 'http://www.e.govt.nz/standards/nzgls/thesauri/sonz150.txt/download',
    'format' => 'csv',
    'module' => 'features_SONZ',
  );

  $settings['NZGLS.Audience.Category'] = array(
    'provider' => 'New Zealand Government Locator Service (NZGLS)',
    'name' => 'NZGLS Audience Type',
    'description' => 'A list of audience types, recommended by the New Zealand Government for use in government and local body IT management. (21 terms)',
    'about' => 'http://www.e.govt.nz/standards/metadata/standard/nzgls-usage-guide-v2.1',
    'servicetype' => 'lookup',
    'protocol' => 'URI',
    'pattern' => 'https://spreadsheets.google.com/pub?key=0Ap8cTTsqO2oIdHJGUVNSNHRHMmRkUFR3ZVgyTV9hQkE&hl=en_GB&single=true&gid=0&output=csv',
    'format' => 'csv',
    'module' => 'features_NZGLS_Audience_Category',
  );

  $settings['NZGLS.Type.Category'] = array(
    'provider' => 'New Zealand Government Locator Service (NZGLS)',
    'name' => 'NZGLS Document Type',
    'description' => 'A list of document and resource types, recommended by the New Zealand Government for use in government and local body IT management. (34 terms)',
    'about' => 'http://www.e.govt.nz/standards/metadata/standard/nzgls-usage-guide-v2.1',
    'servicetype' => 'lookup',
    'protocol' => 'URI',
    'pattern' => 'https://spreadsheets.google.com/pub?key=0Ap8cTTsqO2oIdHJGUVNSNHRHMmRkUFR3ZVgyTV9hQkE&hl=en_GB&single=true&gid=1&output=csv',
    'format' => 'csv',
    'module' => 'features_NZGLS_Type_Category',
  );

  return $settings;
}
