; WetKit Search Makefile

api = 2
core = 7.x

; Search API and Facet API Modules

projects[facetapi][version] = 1.x-dev
projects[facetapi][subdir] = contrib
projects[facetapi][type] = module
projects[facetapi][download][type] = git
projects[facetapi][download][revision] = ed38b53
projects[facetapi][download][branch] = 7.x-1.x

projects[search_api][version] = 1.x-dev
projects[search_api][subdir] = contrib
projects[search_api][type] = module
projects[search_api][download][type] = git
projects[search_api][download][revision] = 606b895
projects[search_api][download][branch] = 7.x-1.x

projects[search_api_solr][version] = 1.x-dev
projects[search_api_solr][subdir] = contrib
projects[search_api_solr][type] = module
projects[search_api_solr][download][type] = git
projects[search_api_solr][download][revision] = b40a0d0
projects[search_api_solr][download][branch] = 7.x-1.x
projects[search_api_solr][patch][1407282] = http://drupal.org/files/1407282-variable_solr_connection_class-37.patch

projects[search_api_db][version] = 1.x-dev
projects[search_api_db][subdir] = contrib
projects[search_api_db][type] = module
projects[search_api_db][download][type] = git
projects[search_api_db][download][revision] = 9ab3b08
projects[search_api_db][download][branch] = 7.x-1.x

; Solr PHP Client Library

libraries[SolrPhpClient][download][type] = get
libraries[SolrPhpClient][download][url] = http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.zip

; Tailor app for WetKit

projects[custom_search][version] = 1.11
projects[custom_search][subdir] = contrib

projects[search404][version] = 1.2
projects[search404][subdir] = contrib
