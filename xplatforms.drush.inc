<?php

/**
 * @file
 * Manage Drush makefiles the Praxis way.
 */

/**
 * Implements hook_drush_command().
 */
function xplatforms_drush_command() {

  $items['xplatforms'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => 'Update, build and import Drupal (and CiviCRM) platforms.',
    'arguments' => array(
      'Stub' => 'The stub makefile from which to build your platform.',
    ),
    'options' => array(
    #  'list' => 'Output a simple list of projects.',
    ),
    'required-arguments' => FALSE,
    'aliases' => array('xp'),
  );

  $items['xplatforms-init'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => 'Initialize a makefile directory for use with xplatforms.',
    'arguments' => array(
      'Path' => 'A directory containing stub makefiles.',
    ),
    'options' => array(
      'names' => 'Makefile set name(s) (defaults to basename($path).)',
    ),
    'required-arguments' => FALSE,
    'aliases' => array('xpinit'),
  );

  $items['xplatforms-register'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => 'Register makefile directories for use with xplatforms.',
    'arguments' => array(
      'Paths' => 'One or more directories containing stub makefiles.',
    ),
    'options' => array(
      'names' => 'Makefile set name(s) (defaults to basename($path).)',
    ),
    'required-arguments' => TRUE,
    'aliases' => array('xpreg'),
  );

  $items['xplatforms-scan'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => 'Scan for makefiles in registered directories.',
    'arguments' => array(
      'Name' => '(Optional) The name of a set of makefiles to scan in detail.',
    ),
    'options' => array(
      'include' => 'Additonal paths to scan for platform makefiles.',
      'exclude' => 'Registered sets of makefiles to ignore.',
      'lockfiles' => 'Scan for platform lockfiles rather than makefiles.',
    ),
    'required-arguments' => FALSE,
    'aliases' => array('xps'),
  );

  $items['xplatforms-update'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => 'Update Drupal (and CiviCRM) platform lockfiles.',
    'arguments' => array(
      'Stub' => 'The stub makefile from which to update your lockfile.',
    ),
    'options' => array(
    #  'list' => 'Output a simple list of projects.',
    ),
    'required-arguments' => FALSE,
    'aliases' => array('xpup'),
  );

  $items['xplatforms-revision'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => ' Drupal (and CiviCRM) platforms into Aegir.',
    'arguments' => array(
      'Platform' => 'Commit changes into version control.',
    ),
    'options' => array(
    #  'list' => 'Output a simple list of projects.',
    ),
    'required-arguments' => FALSE,
    'aliases' => array('xprev'),
  );

  $items['xplatforms-release'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => 'Import Drupal (and CiviCRM) platforms into Aegir.',
    'arguments' => array(
      'Platform' => 'Tag and push changes.',
    ),
    'options' => array(
    #  'list' => 'Output a simple list of projects.',
    ),
    'required-arguments' => FALSE,
    'aliases' => array('xprel'),
  );

  $items['xplatforms-build'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => 'Build Drupal (and CiviCRM) platforms.',
    'arguments' => array(
      'Lockfile' => 'The lock makefile from which to build your platform.',
    ),
    'options' => array(
    #  'list' => 'Output a simple list of projects.',
    ),
    'required-arguments' => FALSE,
    'aliases' => array('xpb'),
  );

  $items['xplatforms-import'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => 'Import Drupal (and CiviCRM) platforms into Aegir.',
    'arguments' => array(
      'Platform' => 'The platform to import into Aegir.',
    ),
    'options' => array(
      'date' => 'Add a datestamp to the platform name.',
      'suffix' => 'Add a suffix (e.g. -prod, -dev) to the platform name.',
    ),
    'required-arguments' => FALSE,
    'aliases' => array('xpi'),
  );


  return $items;
}

/**
 * Command callback for the main xplatforms command.
 */
function drush_xplatforms() {
  # init
  # register
  # scan
  # update
  # revision
  # release
  # build
  # import
}

/**
 * Command callback for the xplatforms-init command.
 */
function drush_xplatforms_init() {
  # cp /templates $path -r
}

/**
 * Command callback for the xplatforms-register command.
 */
function drush_xplatforms_register() {
  # ln -s ~/makefiles dirname(__FILE__)
}

/**
 * Command callback for the xplatforms-scan command.
 */
function drush_xplatforms_scan() {
  # ls ~/.drush/xplatforms/platforms| grep "*.stub"
}

/**
 * Command callback for the xplatforms-update command.
 */
function drush_xplatforms_update() {
  # > Which platform would you like to update?
  # drush make --no-build --lock=/tmp/make.lock stubs/${platform}.make
  # drush diff lockfiles/${platform}.lock /tmp/make.lock
  # > Accept these changes?
  # cp /tmp/make.lock lockfiles/${platform}.lock
  # > Add notes?
  # echo $notes > /lockfiles/RelNotes.txt
  # drush diff lockfiles/Drupal7.lock /tmp/make.lock >> ${platform}.diff
  # drush rln `drush diff lockfiles/Drupal7.lock /tmp/make.lock --list` >> /lockfiles/RelNotes.txt
}

/**
 * Command callback for the xplatforms-update command.
 */
function drush_xplatforms_revision() {
  # git commit -am"Updated [--name].\n `echo ${platform}.diff`"
}

/**
 * Command callback for the xplatforms-update command.
 */
function drush_xplatforms_release() {
  # git tag -a v1.4 -m '`drush git-release-notes $last_tag $latest_tag`'
  # git push
  # drush_hook_post_xplatforms_release() (e.g. debian packaging, rsync to prod...)
}

/**
 * Command callback for the xplatforms-update command.
 */
function drush_xplatforms_build() {
  # drush xplatforms-scan --lockfiles
  # > Which platform would you like to build?
  # drush make
  # cp favicon (?) -- this should be feasible with make
  # cp makefile (& relnotes?)
  # echo 'location info' > platform/platform.txt
}

/**
 * Command callback for the xplatforms-update command.
 */
function drush_xplatforms_import() {
  # > Which platform would you like to import?
  # drush provision-save --etc...
  # drush @platform_alias hosting-import
}
