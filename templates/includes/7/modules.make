;****************************************
; General
;****************************************

; Description
; A drush makefile for Drupal modules.

;****************************************
; Modules
;****************************************

projects[] = admin_menu
projects[] = dblogin
projects[] = entity
;projects[] = entityreference  // patched
projects[] = media
;projects[] = media_vimeo  // pinned
projects[] = views


;****************************************
;* Libraries, patches & pins
;****************************************

includes[] = modules/libraries.make
includes[] = modules/patches.make
includes[] = modules/pins.make


;****************************************
; End
;****************************************
