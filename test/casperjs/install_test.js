/* 
 * CASPERJS TEST(S)
 */


casper.test.comment('Making sure our test site is loaded correctly');

// Make sure the site is up
casper.start('http://localhost:8080/test-views-load-more-pager', function() {
  this.test.assertHttpStatus(200, 'Testing site is up');
  
  //this.test.assertTitle('test_views_load_more_pager | Site-Install', 'Title seems correct');

  //this.test.assertEval(function() {
  //  return document.querySelectorAll('.view-test-views-load-more-pager .views-row').length == 1;
  //}, 'There is only one node on the page');

  //this.click('ul.pager-load-more a');
  //this.echo("Waiting for ajax response.");

  //casper.wait(1000, function() {
  //  this.test.assertEval(function() {
  //    return document.querySelectorAll('.view-test-views-load-more-pager .views-row').length == 2;
  //  }, 'There are now two nodes on the page');
  //});

});

casper.run(function() {
    this.test.done();
});