;****************************************
; General
;****************************************

; Description
; A drush makefile for Drupal development modules.


;****************************************
; Modules
;****************************************

projects[] = coder
projects[] = devel
projects[] = devel_themer
projects[] = drupalforfirebug
projects[] = performance
projects[] = search_krumo
projects[] = simplehtmldom
projects[] = devel_debug_log


;****************************************
;* Libraries, patches & pins
;****************************************

includes[] = dev/libraries.make
;includes[] = dev/patches.make
;includes[] = dev/pins.make


;****************************************
; End
;****************************************
