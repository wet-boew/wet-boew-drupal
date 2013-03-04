<img alt="Banner" src="http://dl.dropbox.com/u/38413195/banner.jpeg" title="By Y Anderson (Own work) [CC-BY-SA-3.0 (http://creativecommons.org/licenses/by-sa/3.0">

# Web Experience Toolkit Drupal Distribution

[![Build Status](https://secure.travis-ci.org/wet-boew/wet-boew-drupal.png?branch=master)](http://travis-ci.org/wet-boew/wet-boew-drupal)
[![Selenium Test Status](https://saucelabs.com/buildstatus/sylus)](https://saucelabs.com/u/sylus)


>* **WxT-Drupal 7.x-1.0-rc1-hotfix1 was released on February 12, 2013 [(7.x-1.0-rc1-hotfix1 release notes)](https://github.com/wet-boew/wet-boew-drupal/wiki/v7.x-1.0-rc1-hotfix1-release-notes)**
>* **WxT-Drupal 7.x-1.0-rc1 will be released on February 11, 2013 [(7.x-1.0-rc1 release notes)](https://github.com/wet-boew/wet-boew-drupal/wiki/v7.x-1.0-rc1-release-notes)**
>
>Responsiveness: [http://responsinator.com/?url=sandbox.openplus.ca](http://responsinator.com/?url=sandbox.openplus.ca)
>
>The WxT-Drupal distribution is a web content management system which assists in building and maintaining innovative Web sites that are accessible, usable, and interoperable. This distribution is open source software and free for use by departments and external Web communities. This distribution relies and integrates extensively on the [WET-BOEW jQuery Framework](http://github.com/wet-boew/wet-boew) to leverage much of the rendering and overall markup. AdaptiveTheme is used as the base theme for its exceptional HTML5 support and exhaustive accessibility testing. Where possible WxT-Drupal will also leverage work from the [Panopoly](http://drupal.org/project/panopoly) and [Spark](http://drupal.org/project/spark) Distributions due to the amazing UX features being designed.
>
>Development has been tailored for organizations that need to comply with standards for accessibility and bilingualism or that simply need a distribution that allows them to get up and running quickly using a carefully curated selection of modules that can support common enterprise business requirements. Specific information about how to install or update the distribution can be found here: [Download, Installation, and Update](https://github.com/wet-boew/wet-boew-drupal/wiki/Download%2C-Installation%2C-and-Update)

>Should you require more information not discussed in this README file please proceed to our wiki pages which offer some more information about this Drupal Distribution. The wiki pages will be constantly updated as work progresses. You can access the Wiki here: [Wiki Documentation](https://github.com/wet-boew/wet-boew-drupal/wiki)

### Alternate Methods

If you do not wish to perform a build out of Drupal yourself (instructions below) we have two options for you:
> 1. [Virtual Machine (Vagrant Chef Provision)] (https://github.com/wet-boew/ariadne-wet-boew-drupal)
>   * a) A preconfigured lightweight, reproducible, and portable virtualized development environment
> 2. [Drupal Pre-Built](https://github.com/sylus/wet-boew-drupal-compiled) (Currently Offline)
>   * a) A prebuilt (post make) codebase for people who don't want to play around with Drush

## Linux, Mac OSX, and Windows

### Installation

> The WET Distribution now uses Drush Make for rapid built out of the Drupal codebase. A drush make file is similar to "ant script" which allows for us to just host the code that we are developing (Installation Profile and Custom Modules, Features, and Themes) on GitHub. Any user who has Drush installed can then can then perform a build out of both the Drupal Core package + and various contributed modules hosted on Drupal.org.

> 1. Ensure you have the appropriate base requirements setup for Drupal as per the [System Requirements](https://github.com/wet-boew/wet-boew-drupal/wiki/System-Requirements) documentation.
> 2. Install Drush 5.8 or higher (inlcudes Drush Make):
>   * a) Linux, Mac OSX: Follow instructions at http://drupal.org/node/477684
>   * b) Windows: http://drush.ws/drush_windows_installer
> 3. Install Git 1.7.10 or higher (Some lower versions of git do not apply patches from the make file with Drush Make):
>   * a) Linux, Mac OSX: http://code.google.com/p/git-osx-installer/
>   * b) Windows: http://msysgit.github.com/
> 4. Clone this repository into a tmp directory using the following commands on the Git Bash command prompt.
<pre>
git clone https://github.com/wet-boew/wet-boew-drupal.git &lt;Temporary Directory Path&gt;/wet-boew-drupal;
</pre>
> 4. Build the complete Drupal installation software profile in your Web Server DOCROOT using the following commands on the Git Bash command prompt.
<pre>
Command: drush make --prepare-install --no-gitinfofile --working-copy &lt;Temporary Directory Path&gt;/wet-boew-drupal/build-wetkit.make &lt;Web Server Directory Path&gt; --yes (can append -v for verbose output)
</pre>
> 5. To quickly install using the Drush command line, change to the directory where Drupal (for example /var/www/html) was installed and enter this command.
> Be sure to use a password that meets the password policy for WET.
<pre>
Command: drush si wetkit wetkit_wetboew_selection_form.theme=wetkit_adaptivetheme --sites-subdir=&lt;domain&gt; --db-url=mysql://&lt;username&gt;:&lt;password&gt;@&lt;domain&gt;:&lt;port&gt;/&lt;database&gt; --account-name=&lt;username&gt; --account-mail=&lt;accountemail&gt; --account-pass=&lt;userpassword&gt; --site-mail=&lt;siteemail&gt; --site-name=&lt;sitename&gt;
Example: drush si wetkit wetkit_wetboew_selection_form.theme=wetkit_adaptivetheme --sites-subdir=drupal_wet --db-url=mysql://drupalusr:drupalusr_pass@localhost:3306/wetkit_db --account-name=admin --account-pass=WetKit@2012 --account-mail=admin@example.com --site-mail=admin@example.com --site-name="Web Experience Toolkit"
</pre>
> 6. Fix Permissions On files directory served by Web Server:
> Depending on your server set-up you will have to make sure that the /sites/default/files or /sites/&lt;domain&gt;/files directory has the correct owner (webserver):
<pre>
chown -R apache:apache /sites/&lt;domain&gt;/files
</pre>

> **NOTE:** When using Mac OSX all the commands can be done directly in Terminal.  When using Windows, two different command prompts are used (Not to be confused with the Windows Command Prompt.  Steps 4 and 5 are run in the Git Bash command prompt and step 6 is run in the Drush command prompt).

### Update
> Drush Make can also be used to update an existing install (IMPORTANT: Please use caution and understand how this process works before attempting!)
>
>If you want to update to the latest stable version of the Distribution:
>
1. Perform a fresh build following installation instructions above (point at a specific tag sha)
2. Move your sites directory (where your custom modules/themes should be) from WEBROOT into the new build folder
3. Replace your WEBROOT with the contents of the new build folder
4. Run drush updatedb
5. Run drush cc all
6. Your new site should be good to go!
