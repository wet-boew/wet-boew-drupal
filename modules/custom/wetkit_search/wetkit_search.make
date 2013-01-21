; WetKit Search Makefile

api = 2
core = 7.x

; Search API and Facet API Modules

projects[facetapi][version] = 1.2
projects[facetapi][subdir] = contrib

projects[search_api][version] = 1.4
projects[search_api][subdir] = contrib

projects[search_api_solr][version] = 1.0-rc3
projects[search_api_solr][subdir] = contrib
projects[search_api_solr][patch][1407282] = http://drupal.org/files/1407282-variable_solr_connection_class-37.patch

projects[search_api_db][version] = 1.x-dev
projects[search_api_db][subdir] = contrib
projects[search_api_db][type] = module
projects[search_api_db][download][type] = git
projects[search_api_db][download][revision] = a6203a3
projects[search_api_db][download][branch] = 7.x-1.x
projects[search_api_db][patch][1144620] = http://drupal.org/files/1144620--umlauts-46.patch
projects[search_api_db][patch][1649042] = https://raw.github.com/gist/4222276/afb654085da1231d958179e4b7a2c1f93b9fe66c/search_api_db_work.patch

; Solr PHP Client Library

libraries[SolrPhpClient][download][type] = get
libraries[SolrPhpClient][download][url] = http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.zip

; Tailor app for WetKit

projects[custom_search][version] = 1.11
projects[custom_search][subdir] = contrib

projects[search404][version] = 1.1
projects[search404][subdir] = contrib