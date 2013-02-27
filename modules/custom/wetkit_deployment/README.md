WetKit Deployment
=================
Functionality to help show how one can leverage the deploy module

Key features
* Sample Deployment Plan
* Sample Deployment EndPoint
* CTools Plugin

Important
* This module isn't enabled by default
* Client: Please run the following drush make in profiles/wetkit directory:
    drush make --no-core --contrib-destination=. modules/custom/wetkit_deployment/wetkit_deployment.make
* Server: Please run the following drush make in profiles/wetkit directory:
    drush make --no-core --contrib-destination=. modules/custom/wetkit_deployment/wetkit_deployment_service/wetkit_deployment_service.make
* Enable!