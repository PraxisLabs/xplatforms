;****************************************
; General
;****************************************

; Description
; A drush makefile for Drupal core.

;****************************************
; Core
;****************************************

; Checking for new updates at:
; https://github.com/pressflow/7/tags
; https://drupal.org/project/drupal

; Pressflow
projects[drupal][type] = core
projects[drupal][download][type] = git
projects[drupal][download][url] = git://github.com/pressflow/7.git
;projects[drupal][download][tag] = 7.28
;projects[drupal][download][tag] = pressflow-7.28
projects[drupal][download][revision] = c4541e614da0139a728d279c58fab2df7bb737fb

; To use the standard core from drupal.org instead,
; uncomment the line below and comment out the lines above.
;projects[drupal][version] = 7.28

;****************************************
; Patches
;****************************************

; Improvements to the core file robots.txt in Drupal
; https://drupal.org/node/1317338#comment-5146596
; If this patch does not work anymore on a new version of Drupal, we should remake it.
projects[drupal][patch][1317338] = http://drupal.org/files/robots.txt.drupal-7.4.patch

; Empty $account->roles causes a sql error in user_access
; https://drupal.org/node/777116#comment-4283336
projects[drupal][patch][777116] = http://drupal.org/files/issues/777116-no-roles-error.patch

; ACL support for D7
; https://drupal.org/node/1798242
; ./sites/default/files directory permission check is incorrect during install AND status report
; https://drupal.org/node/944582#comment-5872786
projects[drupal][patch][944582] = http://drupal.org/files/d7-944582-59-do-not-test.patch

;****************************************
; End
;****************************************
