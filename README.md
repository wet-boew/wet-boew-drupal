<img src="https://wetkit.atlassian.net/wiki/download/thumbnails/360453/drupal.png?effects=drop-shadow">

# Drupal 7 Web Experience Toolkit Distribution

[![Build Status](https://secure.travis-ci.org/Web-Experience-Toolkit/Drupal7-WET-Distro.png?branch=master)](http://travis-ci.org/Web-Experience-Toolkit/Drupal7-WET-Distro)

The WET Distribution now uses Drush Make for rapid built out of the Drupal codebase. A drush make file is similar to "ant script" which allows for us to just host the code that we are developing (Installation Profile and Custom Modules, Features, and Themes) on GitHub. Any user who has Drush installed can then query this GitHub repository at the specified make file location (steps outlined below) and can then perform a build out of both the Drupal Core package + and various Contributed Modules hosted on Drupal.org.

If you do not wish to compile Drupal and its various packages we host the complete codebase at: [Drupal Pre-Built](https://github.com/Web-Experience-Toolkit/Drupal7-WET-Distro-Compiled). It should be noted that this repository will only be updated on a monthly basis.

## Linux, Mac OSX, etc

### Installation

> 1. Install Drush 5.0 (features Drush-Make) as per http://drupal.org/node/477684
>
> 2. Perform the build out procedure by typing:
<pre>
drush make --no-gitinfofile --working-copy https://github.com/Web-Experience-Toolkit/Drupal7-WET-Distro/raw/master/distro.build &lt;directory_name&gt;
</pre>
>
> 3. Rapid Installation (via Drush):
<pre>
drush si webexp --db-url=mysql://&lt;username&gt;:&lt;password&gt;@&lt;domain&gt;:&lt;port&gt;/&lt;database&gt; --account-name=&lt;username&gt; --account-pass=&lt;userpassword&gt; --site-mail=&lt;siteemail&gt; --site-name=&lt;sitename&gt;
</pre>

### Proxy Support

> To get around the Proxy when using Linux or Mac OSX all you have to do is edit the following files that come native to the environment.

> 1. .curlrc: To Come 
>

## Windows

### Installation

> 1. Install Drush 5.1 (features Drush-Make) from http://drush.ws/drush_windows_installer
>
> 2. Install msysgit (available from http://msysgit.github.com) and start a Git Bash terminal windows
>
> 3. Build the complete Drupal installation software profile using the following command on the Bash command promprt.
<pre>
drush make --no-gitinfofile --working-copy https://github.com/Web-Experience-Toolkit/Drupal7-WET-Distro/raw/7.x-1.0.dev/distro.build &lt;directory_name&gt;
</pre>
> Note in this example, that the branch name is included. For the master branch use this command instead.
<pre>
drush make --no-gitinfofile --working-copy https://github.com/Web-Experience-Toolkit/Drupal7-WET-Distro/raw/master/distro.build &lt;directory_name&gt;
</pre>
> 4. To quickly install using the Drush command line, change to the directory where Drupal (for example C:/apache2/htdocs) was installed and enter this command.
> Be sure to use a password that meets the password policy for WET.
<pre>
drush si webexp --db-url=mysql://&lt;username&gt;:&lt;password&gt;@&lt;domain&gt;:&lt;port&gt;/&lt;database&gt; --account-name=&lt;username&gt; --account-pass=&lt;userpassword&gt; --site-mail=&lt;siteemail&gt; --site-name=&lt;sitename&gt;
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

### A Note About Clean URLs

> Note that the drush installation process will enable "clean" URLs. In other words, your site will generate URLs that look like this: http://mysite.com/page rather than this: http://example.com/?q=page. However, if mod_rewrite has not been enabled for your Apache server, clean URLs will not work correctly. You can disable clean URLs for your site on this page: http://example.com//?q=admin/config/search/clean-urls. For more information, see the Clean URLs page in the Drupal documentation: http://drupal.org/getting-started/clean-urls.

> The user login page is at http://example.com/?q=user or http://example.com/user (with clean URLs). You will need to input the user name and password that you provided in the installation procedure above.
