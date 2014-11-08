;****************************************
; General
;****************************************

; Description
; A drush makefile for patches to Drupal modules.


;****************************************
; Modules
;****************************************

; https://drupal.org/node/1858402
; People seems to be able to disable a Field module which still has fields, and core seems to call field hooks on disabled modules
; https://drupal.org/node/1459540#comment-6810146
;projects[entityreference][version] = 1.1
projects[entityreference][patch][1459540] = http://drupal.org/files/entityreference-1459540-47-workaround-fatal-error.patch

;****************************************
; End
;****************************************
