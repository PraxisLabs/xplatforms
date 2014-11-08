;****************************************
; General
;****************************************

; Description
; A drush makefile for libraries required by Drupal development modules.


;****************************************
; Modules
;****************************************

;projects[] = devel
libraries[xplatforms_firephpcore][directory_name] = FirePHPCore
libraries[xplatforms_firephpcore][download][type] = svn
libraries[xplatforms_firephpcore][download][url] = http://firephp.googlecode.com/svn/branches/Library-FirePHPCore-0.3

;projects[] = simplehtmldom
libraries[xplatforms_simplehtmldom][directory_name] = simplehtmldom
libraries[xplatforms_simplehtmldom][download][type] = get
libraries[xplatforms_simplehtmldom][download][url] = http://downloads.sourceforge.net/project/simplehtmldom/simplehtmldom/1.5/simplehtmldom_1_5.zip


;****************************************
; End
;****************************************
