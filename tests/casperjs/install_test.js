/*
 * CASPERJS TEST(S)
 */

casper.test.comment('Making sure our test site is loaded correctly');

// Make sure the site is up
casper.start('http://localhost:8080/', function() {
  this.test.assertHttpStatus(200, 'Testing site is up');

  this.test.assertTitle('Web Experience Toolkit', 'Title seems correct');

  this.test.assertEval(function() {
    return document.querySelectorAll('.view-headlines-front-page .views-row').length == 3;
  }, 'There are three headlines on the front page');

});

casper.run(function() {
    this.test.done();
});
