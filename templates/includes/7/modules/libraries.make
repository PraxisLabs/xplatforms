;****************************************
; General
;****************************************

; Description
; A drush makefile for libraries required by Drupal modules.


;****************************************
; Libraries
;****************************************

;projects[views_slideshow][version] = 3.1
; TODO: Add a 'tag' or 'commit' here
libraries[kplatforms_jquery_cycle][directory_name] = jquery.cycle
libraries[kplatforms_jquery_cycle][download][type] = get
libraries[kplatforms_jquery_cycle][download][url] = https://raw.github.com/malsup/cycle/master/jquery.cycle.all.js
libraries[kplatforms_jquery_cycle][overwrite] = TRUE
; TODO: Add a 'tag' or 'commit' here
libraries[kplatforms_json2][directory_name] = json2
libraries[kplatforms_json2][download][type] = get
libraries[kplatforms_json2][download][url] = https://raw.github.com/douglascrockford/JSON-js/master/json2.js
libraries[kplatforms_json2][overwrite] = TRUE


;****************************************
; End
;****************************************
