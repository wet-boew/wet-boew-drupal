<?php
/**
 * @file
 * pd_solr_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pd_solr_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pd_views_facet';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__solr';
  $view->human_name = 'PD Solr Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contract View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['dm_field_contract_date']['id'] = 'dm_field_contract_date';
  $handler->display->display_options['fields']['dm_field_contract_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['dm_field_contract_date']['field'] = 'dm_field_contract_date';
  $handler->display->display_options['fields']['dm_field_contract_date']['label'] = 'Contract Date';
  $handler->display->display_options['fields']['dm_field_contract_date']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'Purpose';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: content */
  $handler->display->display_options['fields']['content']['id'] = 'content';
  $handler->display->display_options['fields']['content']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['content']['field'] = 'content';
  $handler->display->display_options['fields']['content']['label'] = 'Total Cost';
  $handler->display->display_options['fields']['content']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['ftm_field_contract_value']['id'] = 'ftm_field_contract_value';
  $handler->display->display_options['fields']['ftm_field_contract_value']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ftm_field_contract_value']['field'] = 'ftm_field_contract_value';
  $handler->display->display_options['fields']['ftm_field_contract_value']['label'] = 'Contract Value';
  $handler->display->display_options['fields']['ftm_field_contract_value']['element_label_colon'] = FALSE;
  /* Sort criterion: Apache Solr: ds_field_effective_date */
  $handler->display->display_options['sorts']['ds_field_effective_date']['id'] = 'ds_field_effective_date';
  $handler->display->display_options['sorts']['ds_field_effective_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ds_field_effective_date']['field'] = 'ds_field_effective_date';
  $handler->display->display_options['sorts']['ds_field_effective_date']['order'] = 'DESC';
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  /* Filter criterion: Apache Solr: bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['operator'] = 'word';
  $handler->display->display_options['filters']['bundle']['value'] = 'pd_travel pd_hospitality';

  /* Display: Contracts */
  $handler = $view->new_display('page', 'Contracts', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Disclosure of Contracts';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>On March 23, 2004, the government announced a new policy on the mandatory publication of contracts over $10,000.</p>
<p>This Web site provides information on contracts issued by or on behalf of the Canadian Transportation Agency. Every three months, we will be reporting contracts awarded by the Agency in the previous three months.</p>
<p>The rules and principles governing government contracting are outlined in the <a href="http://www.tbs-sct.gc.ca/pubs_pol/dcgpubs/Contracting/contractingpol_e.asp">Treasury Board Contracting Policy</a>. The objective of government procurement contracting is to acquire goods and services, including construction services, in a manner that enhances access, competition and fairness and results in best value to Canada.</p>
<p>Please note that information that would normally be withheld under the Access to Information Act and the Privacy Act does not appear on this Web site.</p>';
  $handler->display->display_options['header']['area']['format'] = 'wetkit_html_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: ds_field_contract_date */
  $handler->display->display_options['fields']['ds_field_contract_date']['id'] = 'ds_field_contract_date';
  $handler->display->display_options['fields']['ds_field_contract_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ds_field_contract_date']['field'] = 'ds_field_contract_date';
  $handler->display->display_options['fields']['ds_field_contract_date']['label'] = 'Contract Date';
  $handler->display->display_options['fields']['ds_field_contract_date']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['ds_field_contract_date']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['ds_field_contract_date']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['ds_field_contract_date']['alter']['trim'] = TRUE;
  /* Field: Apache Solr: ts_field_vendor */
  $handler->display->display_options['fields']['ts_field_vendor']['id'] = 'ts_field_vendor';
  $handler->display->display_options['fields']['ts_field_vendor']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ts_field_vendor']['field'] = 'ts_field_vendor';
  $handler->display->display_options['fields']['ts_field_vendor']['label'] = 'Vendor';
  $handler->display->display_options['fields']['ts_field_vendor']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['ts_field_vendor']['alter']['path'] = '[url]';
  /* Field: Apache Solr: ts_body */
  $handler->display->display_options['fields']['ts_body']['id'] = 'ts_body';
  $handler->display->display_options['fields']['ts_body']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ts_body']['field'] = 'ts_body';
  $handler->display->display_options['fields']['ts_body']['label'] = 'Body';
  /* Field: Apache Solr: ts_field_value_formatted */
  $handler->display->display_options['fields']['ts_field_value_formatted']['id'] = 'ts_field_value_formatted';
  $handler->display->display_options['fields']['ts_field_value_formatted']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ts_field_value_formatted']['field'] = 'ts_field_value_formatted';
  $handler->display->display_options['fields']['ts_field_value_formatted']['label'] = 'Value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  /* Filter criterion: Apache Solr: bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = 'pd_contract';
  $handler->display->display_options['path'] = 'proactive-disclosure/contract';

  /* Display: Travel-Hospitality */
  $handler = $view->new_display('page', 'Travel-Hospitality', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Travel and Hospitality';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>On December 12, 2003, the Prime Minister announced a new policy on the mandatory publication of travel and hospitality expenses for selected government officials.</p>
<p>This Web site provides information on the travel and hospitality expenses incurred within the Canadian Transportation Agency by the Chairman and Vice-Chairman. The Chairman\'s reports include all hospitality expenses made by the Chairman\'s Office as well as by other Members of the Agency.</p>
<p>The rules and principles governing travel are outlined in the <a href="http://www.tbs-sct.gc.ca/pubs_pol/hrpubs/mg-ldm/gfmo_e.asp">Guidelines for Ministers\' Offices</a> and in Treasury Board\'s <a href="http://www.tbs-sct.gc.ca/hr-rh/gtla-vgcl/index_e.asp">Travel Directive</a> and <a href="http://www.tbs-sct.gc.ca/pubs_pol/hrpubs/TBM_113/STA_e.asp">Special Travel Authorities</a>. The purpose of these directives is to provide for the reimbursement of reasonable expenses necessarily incurred during travel on government business.</p>
<p>The Government of Canada extends hospitality in accordance with the rules and principles outlined in the <a href="http://www.tbs-sct.gc.ca/pubs_pol/hrpubs/mg-ldm/gfmo_e.asp">Guidelines for Ministers\' Offices</a> and the Treasury Board <a href="http://www.tbs-sct.gc.ca/pubs_pol/hrpubs/TBM_113/HOSP_e.asp">Hospitality Policy</a>. The objective of the policy is to ensure that hospitality is extended in an economical and affordable way when it facilitates government business or is considered desirable as a matter of courtesy and protocol.</p>
<p>The information on this Web site will be updated every three months, beginning on March 31, 2004.</p>
<p>Please note that information that would normally be withheld under the <em>Access to Information Act</em> and the <em>Privacy Act</em> does not appear on this Web site.</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: ts_field_date */
  $handler->display->display_options['fields']['ts_field_date']['id'] = 'ts_field_date';
  $handler->display->display_options['fields']['ts_field_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ts_field_date']['field'] = 'ts_field_date';
  $handler->display->display_options['fields']['ts_field_date']['label'] = 'Date';
  /* Field: Apache Solr: ts_purpose */
  $handler->display->display_options['fields']['ts_purpose']['id'] = 'ts_purpose';
  $handler->display->display_options['fields']['ts_purpose']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ts_purpose']['field'] = 'ts_purpose';
  $handler->display->display_options['fields']['ts_purpose']['label'] = 'Purpose';
  $handler->display->display_options['fields']['ts_purpose']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['ts_purpose']['alter']['path'] = '[url]';
  /* Field: Apache Solr: ts_field_total_formatted */
  $handler->display->display_options['fields']['ts_field_total_formatted']['id'] = 'ts_field_total_formatted';
  $handler->display->display_options['fields']['ts_field_total_formatted']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ts_field_total_formatted']['field'] = 'ts_field_total_formatted';
  $handler->display->display_options['fields']['ts_field_total_formatted']['label'] = 'Total Cost';
  $handler->display->display_options['path'] = 'proactive-disclosure/travel-hospitality';

  /* Display: Reclassification */
  $handler = $view->new_display('page', 'Reclassification', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Position Reclassifications';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'ds_field_effective_date' => 'ds_field_effective_date',
    'ts_field_organizational_component' => 'ts_field_organizational_component',
    'ts_position_number' => 'ts_position_number',
    'ts_title_field' => 'ts_title_field',
    'ts_field_previous_pos' => 'ts_field_previous_pos',
    'ts_field_reason' => 'ts_field_reason',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'ds_field_effective_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ts_field_organizational_component' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ts_position_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ts_title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ts_field_previous_pos' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ts_field_reason' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>On February 25, 2004, the government announced the mandatory publication of information concerning the reclassification of occupied positions in the Public Service of Canada.</p>
<p>This Web site provides information on the reclassification of Canadian Transportation Agency occupied positions on a quarterly basis.</p>
<p>The rules and principles governing the reclassification of occupied positions are outlined in the <a href="http://www.psagency-agencefp.gc.ca/pol/recls-eng.asp"><em>Guidelines on Reclassification</em></a>. These guidelines provide Deputy Heads with a framework within which to exercise their delegated classification authority for the reclassification of existing positions.</p>
<p>The following are some of the reasons that the duties of a position change resulting in a reclassification of the position:</p>
<ul>
<li>Changes to departmental/program mandate;</li>
<li>Managers reorganize in response to external conditions that increase or decrease available resources;</li>
<li>Managers reorganize to make more efficient and effective use of their financial and human resources, such as technology innovations, changes in employee competencies; or</li>
<li>Managers reassign work among their existing human resources to increase productivity, such as in response to vacancies that require temporary or permanent reassignment of work;</li>
<li>Results from a classification grievance.</li>
</ul>
<p>Reclassification of occupied positions in the Public Service of Canada is an important and necessary business management option. However, when contemplating changes to a position that may result in reclassification, management must endeavour to ensure the proper, effective and efficient use of public money. The cost implication associated with upward reclassification must be known, transparent and support accountability for classification decisions.</p>
<p><a href="http://www.tbs-sct.gc.ca/pd-dp/gr-rg/index-eng.asp">Government-Wide Position Reclassification Departmental Web Sites</a>: information on these Web sites will be updated every three months, starting in October 2004.</p>
<p>Please note that information that would normally be withheld under the <a href="http://laws.justice.gc.ca/en/A-1/index.html"><em>Access to Information Act</em></a> or the <a href="http://laws.justice.gc.ca/en/P-21/index.html"><em>Privacy Act</em></a> does not appear on this Web site.</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: ds_field_effective_date */
  $handler->display->display_options['fields']['ds_field_effective_date']['id'] = 'ds_field_effective_date';
  $handler->display->display_options['fields']['ds_field_effective_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ds_field_effective_date']['field'] = 'ds_field_effective_date';
  $handler->display->display_options['fields']['ds_field_effective_date']['label'] = 'Date';
  $handler->display->display_options['fields']['ds_field_effective_date']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['ds_field_effective_date']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['ds_field_effective_date']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['ds_field_effective_date']['alter']['trim'] = TRUE;
  /* Field: Apache Solr: sm_vid_Organizational_Component */
  $handler->display->display_options['fields']['sm_vid_Organizational_Component']['id'] = 'sm_vid_Organizational_Component';
  $handler->display->display_options['fields']['sm_vid_Organizational_Component']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_vid_Organizational_Component']['field'] = 'sm_vid_Organizational_Component';
  $handler->display->display_options['fields']['sm_vid_Organizational_Component']['label'] = 'Organizational Component';
  /* Field: Apache Solr: ts_position_number */
  $handler->display->display_options['fields']['ts_position_number']['id'] = 'ts_position_number';
  $handler->display->display_options['fields']['ts_position_number']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ts_position_number']['field'] = 'ts_position_number';
  $handler->display->display_options['fields']['ts_position_number']['label'] = 'Position Number';
  /* Field: Apache Solr: ts_title */
  $handler->display->display_options['fields']['ts_title']['id'] = 'ts_title';
  $handler->display->display_options['fields']['ts_title']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ts_title']['field'] = 'ts_title';
  $handler->display->display_options['fields']['ts_title']['label'] = 'Position Title';
  $handler->display->display_options['fields']['ts_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['ts_title']['alter']['path'] = '[url]';
  /* Field: Apache Solr: ts_field_previous_pos */
  $handler->display->display_options['fields']['ts_field_previous_pos']['id'] = 'ts_field_previous_pos';
  $handler->display->display_options['fields']['ts_field_previous_pos']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ts_field_previous_pos']['field'] = 'ts_field_previous_pos';
  $handler->display->display_options['fields']['ts_field_previous_pos']['label'] = 'Previous Classification';
  /* Field: Apache Solr: ts_field_reason */
  $handler->display->display_options['fields']['ts_field_reason']['id'] = 'ts_field_reason';
  $handler->display->display_options['fields']['ts_field_reason']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ts_field_reason']['field'] = 'ts_field_reason';
  $handler->display->display_options['fields']['ts_field_reason']['label'] = 'Reason for Reclassification';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  /* Filter criterion: Apache Solr: bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = 'pd_reclassification';
  $handler->display->display_options['path'] = 'proactive-disclosure/reclassification';
  $translatables['pd_views_facet'] = array(
    t('Master'),
    t('Contract View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Contract Date'),
    t('Purpose'),
    t('Total Cost'),
    t('Contract Value'),
    t('Contracts'),
    t('Disclosure of Contracts'),
    t('<p>On March 23, 2004, the government announced a new policy on the mandatory publication of contracts over $10,000.</p>
<p>This Web site provides information on contracts issued by or on behalf of the Canadian Transportation Agency. Every three months, we will be reporting contracts awarded by the Agency in the previous three months.</p>
<p>The rules and principles governing government contracting are outlined in the <a href="http://www.tbs-sct.gc.ca/pubs_pol/dcgpubs/Contracting/contractingpol_e.asp">Treasury Board Contracting Policy</a>. The objective of government procurement contracting is to acquire goods and services, including construction services, in a manner that enhances access, competition and fairness and results in best value to Canada.</p>
<p>Please note that information that would normally be withheld under the Access to Information Act and the Privacy Act does not appear on this Web site.</p>'),
    t('Vendor'),
    t('Body'),
    t('Value'),
    t('Travel-Hospitality'),
    t('Travel and Hospitality'),
    t('<p>On December 12, 2003, the Prime Minister announced a new policy on the mandatory publication of travel and hospitality expenses for selected government officials.</p>
<p>This Web site provides information on the travel and hospitality expenses incurred within the Canadian Transportation Agency by the Chairman and Vice-Chairman. The Chairman\'s reports include all hospitality expenses made by the Chairman\'s Office as well as by other Members of the Agency.</p>
<p>The rules and principles governing travel are outlined in the <a href="http://www.tbs-sct.gc.ca/pubs_pol/hrpubs/mg-ldm/gfmo_e.asp">Guidelines for Ministers\' Offices</a> and in Treasury Board\'s <a href="http://www.tbs-sct.gc.ca/hr-rh/gtla-vgcl/index_e.asp">Travel Directive</a> and <a href="http://www.tbs-sct.gc.ca/pubs_pol/hrpubs/TBM_113/STA_e.asp">Special Travel Authorities</a>. The purpose of these directives is to provide for the reimbursement of reasonable expenses necessarily incurred during travel on government business.</p>
<p>The Government of Canada extends hospitality in accordance with the rules and principles outlined in the <a href="http://www.tbs-sct.gc.ca/pubs_pol/hrpubs/mg-ldm/gfmo_e.asp">Guidelines for Ministers\' Offices</a> and the Treasury Board <a href="http://www.tbs-sct.gc.ca/pubs_pol/hrpubs/TBM_113/HOSP_e.asp">Hospitality Policy</a>. The objective of the policy is to ensure that hospitality is extended in an economical and affordable way when it facilitates government business or is considered desirable as a matter of courtesy and protocol.</p>
<p>The information on this Web site will be updated every three months, beginning on March 31, 2004.</p>
<p>Please note that information that would normally be withheld under the <em>Access to Information Act</em> and the <em>Privacy Act</em> does not appear on this Web site.</p>'),
    t('Date'),
    t('Reclassification'),
    t('Position Reclassifications'),
    t('<p>On February 25, 2004, the government announced the mandatory publication of information concerning the reclassification of occupied positions in the Public Service of Canada.</p>
<p>This Web site provides information on the reclassification of Canadian Transportation Agency occupied positions on a quarterly basis.</p>
<p>The rules and principles governing the reclassification of occupied positions are outlined in the <a href="http://www.psagency-agencefp.gc.ca/pol/recls-eng.asp"><em>Guidelines on Reclassification</em></a>. These guidelines provide Deputy Heads with a framework within which to exercise their delegated classification authority for the reclassification of existing positions.</p>
<p>The following are some of the reasons that the duties of a position change resulting in a reclassification of the position:</p>
<ul>
<li>Changes to departmental/program mandate;</li>
<li>Managers reorganize in response to external conditions that increase or decrease available resources;</li>
<li>Managers reorganize to make more efficient and effective use of their financial and human resources, such as technology innovations, changes in employee competencies; or</li>
<li>Managers reassign work among their existing human resources to increase productivity, such as in response to vacancies that require temporary or permanent reassignment of work;</li>
<li>Results from a classification grievance.</li>
</ul>
<p>Reclassification of occupied positions in the Public Service of Canada is an important and necessary business management option. However, when contemplating changes to a position that may result in reclassification, management must endeavour to ensure the proper, effective and efficient use of public money. The cost implication associated with upward reclassification must be known, transparent and support accountability for classification decisions.</p>
<p><a href="http://www.tbs-sct.gc.ca/pd-dp/gr-rg/index-eng.asp">Government-Wide Position Reclassification Departmental Web Sites</a>: information on these Web sites will be updated every three months, starting in October 2004.</p>
<p>Please note that information that would normally be withheld under the <a href="http://laws.justice.gc.ca/en/A-1/index.html"><em>Access to Information Act</em></a> or the <a href="http://laws.justice.gc.ca/en/P-21/index.html"><em>Privacy Act</em></a> does not appear on this Web site.</p>'),
    t('Organizational Component'),
    t('Position Number'),
    t('Position Title'),
    t('Previous Classification'),
    t('Reason for Reclassification'),
  );
  $export['pd_views_facet'] = $view;

  return $export;
}
