<img src="http://github.com/wet-boew/wet-boew-drupal/raw/master/images/wetkit_large_logged_2.png">

# Drupal 7 Web Experience Toolkit Distribution

[![Build Status](https://secure.travis-ci.org/wet-boew/wet-boew-drupal.png?branch=master)](http://travis-ci.org/wet-boew/wet-boew-drupal)

The WET Distribution now uses Drush Make for rapid built out of the Drupal codebase. A drush make file is similar to "ant script" which allows for us to just host the code that we are developing (Installation Profile and Custom Modules, Features, and Themes) on GitHub. Any user who has Drush installed can then query this GitHub repository at the specified make file location (steps outlined below) and can then perform a build out of both the Drupal Core package + and various Contributed Modules hosted on Drupal.org.

If you do not wish to compile Drupal and its various packages we host the complete codebase at: [Drupal Pre-Built](https://github.com/sylus/wet-boew-drupal-compiled). It should be noted that this repository will only be updated on a monthly basis.

Should you require further documentation discussed below please proceed to our Wiki Pages at: [Documentation](https://github.com/wet-boew/wet-boew-drupal/wiki).

## Linux, Mac OSX, etc

### Installation

> 1. Install Drush 5.4 or higher (features Drush-Make) as per http://drupal.org/node/477684
>
> 2. Install Git 1.7.11 or higher (Some lower versions of git do not apply patches from the make file with Drush Make):
>
> 3. Build the complete Drupal installation software profile using the following command on the Bash command prompt.
<pre>
Command: drush make --prepare-install --no-gitinfofile --working-copy https://raw.github.com/wet-boew/wet-boew-drupal/master/build-wetkit.make &lt;directory_name&gt; -v --debug
Example: drush make --prepare-install --no-gitinfofile --working-copy https://raw.github.com/wet-boew/wet-boew-drupal/master/build-wetkit.make drupal_wet
</pre>
>
> 4. To quickly install using the Drush command line, change to the directory where Drupal (for example /var/www/html) was installed and enter this command.
> Be sure to use a password that meets the password policy for WET.
<pre>
Command: drush si wetkit wetkit_theme_form.theme=wetkit_adaptivetheme --sites-subdir=&lt;domain&gt; --db-url=mysql://&lt;username&gt;:&lt;password&gt;@&lt;domain&gt;:&lt;port&gt;/&lt;database&gt; --account-name=&lt;username&gt; --account-mail=&lt;accountemail&gt; --account-pass=&lt;userpassword&gt; --site-mail=&lt;siteemail&gt; --site-name=&lt;sitename&gt;
Example: drush si wetkit wetkit_theme_form.theme=wetkit_adaptivetheme --sites-subdir=drupal_wet --db-url=mysql://drupalusr:drupalusr_pass@localhost:3306/wetkit_db --account-name=admin --account-pass=WetKit@2012 --account-mail=admin@example.com --site-mail=admin@example.com --site-name="Web Experience Toolkit"
</pre>
>
> 5. Fix Permissions On files directory served by Web Server:
> Depending on your server set-up you will have to make sure that the /sites/default/files or /sites/&lt;domain&gt;/files directory has the correct owner (webserver):
<pre>
chown -R apache:apache /sites/&lt;domain&gt;/files
</pre>

### Update

> Drush Make can also be used to update an existing install without replacing additional files. (IMPORTANT: However Drush Make will replace all files that Drush Make knows about!)
>
> 1. Switch (cd) to your working Drupal Directory
>
> 2. To quickly update an existing site using the Drush command line, change to the directory where Drupal (for example C:/apache2/htdocs) was installed and enter this command.
<pre>
Command: drush make --no-gitinfofile --working-copy https://raw.github.com/wet-boew/wet-boew-drupal/master/build-wetkit.make .
</pre>
> 3. Since we are just updating an site instead of using drush si we will instead just update the database to reflect any changes in the code.
<pre>
Command: drush -l http://&lt;domain&gt;:8082 updatedb
Example: drush -l http://drupal_wet:8082 updatedb
</pre>

### Proxy Support

> To get around the Proxy when using Linux or Mac OSX all you have to do is edit the following files that come native to the environment.

> 1. .curlrc: To Come 
>

## Windows

### Installation

> 1. Install Drush 5.4 or higher (features Drush-Make) from http://drush.ws/drush_windows_installer
>
> 2. Install msysgit 1.7.11 or higher available from http://msysgit.github.com (Some lower versions of git do not apply patches from the make file with Drush Make) and start a Git Bash terminal windows
>
> 3. Build the complete Drupal installation software profile using the following command on the Bash command prompt.
<pre>
Command: drush make --prepare-install --no-gitinfofile --working-copy https://raw.github.com/wet-boew/wet-boew-drupal/master/build-wetkit.make &lt;directory_name&gt; -v --debug
Example: drush make --prepare-install --no-gitinfofile --working-copy https://raw.github.com/wet-boew/wet-boew-drupal/master/build-wetkit.make drupal_wet
</pre>
> 4. To quickly install using the Drush command line, change to the directory where Drupal (for example C:/apache2/htdocs) was installed and enter this command.
> Be sure to use a password that meets the password policy for WET.
<pre>
Command: drush si wetkit wetkit_theme_form.theme=wetkit_adaptivetheme --sites-subdir=&lt;domain&gt; --db-url=mysql://&lt;username&gt;:&lt;password&gt;@&lt;domain&gt;:&lt;port&gt;/&lt;database&gt; --account-name=&lt;username&gt; --account-mail=&lt;accountemail&gt; --account-pass=&lt;userpassword&gt; --site-mail=&lt;siteemail&gt; --site-name=&lt;sitename&gt;
Example: drush si wetkit wetkit_theme_form.theme=wetkit_adaptivetheme --sites-subdir=drupal_wet --db-url=mysql://drupalusr:drupalusr_pass@localhost:3306/wetkit_db --account-name=admin --account-pass=WetKit@2012 --account-mail=admin@example.com --site-mail=admin@example.com --site-name="Web Experience Toolkit"
</pre>
> 5. Fix Permissions On files directory served by Web Server:
> Depending on your server set-up you will have to make sure that the /sites/default/files or /sites/&lt;domain&gt;/files directory has the correct owner (webserver):
<pre>
chown -R apache:apache /sites/&lt;domain&gt;/files
</pre>

### Update

> Drush Make can also be used to update an existing install without replacing additional files. (IMPORTANT: However Drush Make will replace all files that Drush Make knows about!)
>
> 1. Switch (cd) to your working Drupal Directory
>
> 2. To quickly update an existing site using the Drush command line, change to the directory where Drupal (for example C:/apache2/htdocs) was installed and enter this command.
<pre>
Command: drush make --no-gitinfofile --working-copy https://raw.github.com/wet-boew/wet-boew-drupal/master/build-wetkit.make .
</pre>
> 3. Since we are just updating an site instead of using drush si we will instead just update the database to reflect any changes in the code.
<pre>
Command: drush -l http://&lt;domain&gt;:8082 updatedb
Example: drush -l http://drupal_wet:8082 updatedb
</pre>

### Proxy Support

> To get around the Proxy when using Windows you will have to create an _curlrc in msysgit's home directory then edit the following files.

> 1. .curlrc (msysgit home directory): 
> In your Windows home directory, create a blank text file with the name "_curlrc" with no file extension and add two lines
<pre>
--proxy your.proxyserver.ca:80
--proxy-user &lt;proxy account ID&gt;: &lt;proxy password&gt;
</pre>
> Replace the proxyserver server name and port and the proxy account name and password in the example with the appropriate values.

> This distribution also applies a Drupal core patch that enables Drupal's automatic update and App functionality to work.
> To enable HTTP proxy support in Drupal itself, after building and installing Drupal, modify the following lines in your settings.php file.
<pre>
$conf['proxy_server'] = 'www.proxyserver.ca';
$conf['proxy_port'] = 80;
$conf['proxy_username'] = '';
$conf['proxy_password'] = '';
$conf['proxy_exceptions'] = array('127.0.0.1', 'localhost');
</pre>
> Use appropriate settings for each line.

## A Note About Clean URLs

> Note that the drush installation process will enable "clean" URLs. In other words, your site will generate URLs that look like this: http://mysite.com/page rather than this: http://example.com/?q=page. However, if mod_rewrite has not been enabled for your Apache server, clean URLs will not work correctly. You can disable clean URLs for your site on this page: http://example.com//?q=admin/config/search/clean-urls. For more information, see the Clean URLs page in the Drupal documentation: http://drupal.org/getting-started/clean-urls.

> The user login page is at http://example.com/?q=user or http://example.com/user (with clean URLs). You will need to input the user name and password that you provided in the installation procedure above.

## Wiki Pages

> Should you require more information not discussed in this README file please proceed to our wiki pages which offer some more information about this Drupal Distribution. The wiki pages will be constantly updated as work progresses. You can access the Wiki here: [Wiki Documentation](https://github.com/wet-boew/wet-boew-drupal/wiki)

## Acknowledgments

> This distribution borrows a substantial amount from the Panopoly Project on drupal.org due to its amazing UX features and overall architecture. If you do not need a multilingual and/or government branded site with WET integration you are encouraged to take a look at: http://drupal.org/project/panopoly
