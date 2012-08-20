<img src="http://github.com/wet-boew/wet-boew-drupal/raw/master/images/wetkit_large_logged_2.png">

# Drupal 7 Web Experience Toolkit Distribution

[![Build Status](https://secure.travis-ci.org/wet-boew/wet-boew-drupal.png?branch=master)](http://travis-ci.org/wet-boew/wet-boew-drupal)

The WET Distribution now uses Drush Make for rapid built out of the Drupal codebase. A drush make file is similar to "ant script" which allows for us to just host the code that we are developing (Installation Profile and Custom Modules, Features, and Themes) on GitHub. Any user who has Drush installed can then query this GitHub repository at the specified make file location (steps outlined below) and can then perform a build out of both the Drupal Core package + and various Contributed Modules hosted on Drupal.org.

Should you require more information not discussed in this README file please proceed to our wiki pages which offer some more information about this Drupal Distribution. The wiki pages will be constantly updated as work progresses. 

> You can access the Wiki here: [Wiki Documentation](https://github.com/wet-boew/wet-boew-drupal/wiki)

### Alternate Methods

If you do not wish to perform a build out of Drupal yourself (instructions below) we have two options for you:
> 1. [Virtual Machine (Vagrant Chef Provision)] (https://github.com/sylus/wet-boew-drupal-devops/blob/master/README.markdown)
>   * a) A preconfigured lightweight, reproducible, and portable virtualized development environment
> 2. [Drupal Pre-Built](https://github.com/sylus/wet-boew-drupal-compiled) (Currently Offline)
>   * a) A prebuilt (post make) codebase for people who don't want to play around with Drush

## Linux, Mac OSX, and Windows

### Installation

> 1. Ensure you have the appropriate base requirements setup for Drupal as per the [System Requirements](https://github.com/wet-boew/wet-boew-drupal/wiki/System-Requirements) documentation.
> 2. Install Drush 5.4 or higher (inlcudes Drush Make):
>   * a) Linux, Mac OSX: Follow instructions at http://drupal.org/node/477684
>   * b) Windows: http://drush.ws/drush_windows_installer
> 3. Install Git 1.7.10 or higher (Some lower versions of git do not apply patches from the make file with Drush Make):
>   * a) Linux, Mac OSX: http://code.google.com/p/git-osx-installer/
>   * b) Windows: http://msysgit.github.com/
> 4. Build the complete Drupal installation software profile using the following command on the Bash command prompt.
<pre>
Command: drush make --prepare-install --no-gitinfofile --working-copy https://raw.github.com/wet-boew/wet-boew-drupal/master/build-wetkit.make &lt;directory_name&gt; -v --debug
Example: drush make --prepare-install --no-gitinfofile --working-copy https://raw.github.com/wet-boew/wet-boew-drupal/master/build-wetkit.make drupal_wet
</pre>
> 5. To quickly install using the Drush command line, change to the directory where Drupal (for example /var/www/html) was installed and enter this command.
> Be sure to use a password that meets the password policy for WET.
<pre>
Command: drush si wetkit wetkit_theme_form.theme=wetkit_adaptivetheme --sites-subdir=&lt;domain&gt; --db-url=mysql://&lt;username&gt;:&lt;password&gt;@&lt;domain&gt;:&lt;port&gt;/&lt;database&gt; --account-name=&lt;username&gt; --account-mail=&lt;accountemail&gt; --account-pass=&lt;userpassword&gt; --site-mail=&lt;siteemail&gt; --site-name=&lt;sitename&gt;
Example: drush si wetkit wetkit_theme_form.theme=wetkit_adaptivetheme --sites-subdir=drupal_wet --db-url=mysql://drupalusr:drupalusr_pass@localhost:3306/wetkit_db --account-name=admin --account-pass=WetKit@2012 --account-mail=admin@example.com --site-mail=admin@example.com --site-name="Web Experience Toolkit"
</pre>
> 6. Fix Permissions On files directory served by Web Server:
> Depending on your server set-up you will have to make sure that the /sites/default/files or /sites/&lt;domain&gt;/files directory has the correct owner (webserver):
<pre>
chown -R apache:apache /sites/&lt;domain&gt;/files
</pre>

### Update

> Drush Make can also be used to update an existing install without replacing additional files. (IMPORTANT: However Drush Make will replace all files that Drush Make knows about!)
>
> 1. Switch (cd) to your working Drupal Directory.
>
> 2. To quickly update an existing site using the Drush command line, change to the directory where Drupal was installed and enter this command.
<pre>
Command: drush make --no-gitinfofile --working-copy https://raw.github.com/wet-boew/wet-boew-drupal/master/build-wetkit.make .
</pre>
> 3. Since we are just updating an site instead of using drush si we will instead just update the database to reflect any changes in the code.
<pre>
Command: drush -l http://&lt;domain&gt;:8082 updatedb
Example: drush -l http://&lt;domain&gt;:8082 updatedb
</pre>

### Drush Proxy Support

> 1. To get around the Proxy all you have to do is edit/create the following files that come native to the environment.
>   * a) Linux, Mac OSX: .curlrc
<pre>
> --proxy &lt;domain&gt;:&lt;port&gt;
> --proxy-user &lt;username&gt;:&lt;password&gt;
</pre>
>   * b) Windows: _curlrc
<pre>
> --proxy &lt;domain&gt;:&lt;port&gt;
> --proxy-user &lt;username&gt;:&lt;password&gt;
</pre>

### Drupal Proxy Support

> To facilitate Drupal's automatic update and App functionality you must enable HTTP proxy support in Drupal itself, after building and installing Drupal, modify the following lines in your settings.php file.
<pre>
$conf['proxy_server'] = 'www.proxyserver.ca';
$conf['proxy_port'] = 80;
$conf['proxy_username'] = '';
$conf['proxy_password'] = '';
$conf['proxy_exceptions'] = array('127.0.0.1', 'localhost');
</pre>

## A Note About Clean URLs

> Note that the drush installation process will enable "clean" URLs. In other words, your site will generate URLs that look like this: http://mysite.com/page rather than this: http://example.com/?q=page. However, if mod_rewrite has not been enabled for your Apache server, clean URLs will not work correctly. You can disable clean URLs for your site on this page: http://example.com//?q=admin/config/search/clean-urls. For more information, see the Clean URLs page in the Drupal documentation: http://drupal.org/getting-started/clean-urls.

> The user login page is at http://example.com/?q=user or http://example.com/user (with clean URLs). You will need to input the user name and password that you provided in the installation procedure above.

## Acknowledgments

> This distribution borrows a substantial amount from the Panopoly Project on drupal.org due to its amazing UX features and overall architecture. If you do not need a multilingual and/or government branded site with WET integration you are encouraged to take a look at: [Panopoly](http://drupal.org/project/panopoly).
