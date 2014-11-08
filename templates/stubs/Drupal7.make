;****************************************
; General
;****************************************

; Description
; A drush stub makefile for Drupal 7.x.

; drush make API version
api = 2

; Drupal core
core = 7.x

; Defaults
defaults[projects][subdir] = "contrib"

;****************************************
; Includes
;****************************************

; Core
includes[] = ../includes/7/core.make

; Modules
;includes[] = ../includes/7/dev.make
includes[] = ../includes/7/modules.make

; Themes
includes[] = ../includes/7/themes.make

;****************************************
; End
;****************************************
