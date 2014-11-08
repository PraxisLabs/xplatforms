XPLATFORMS
==========

Xplatforms is a Drush extension to ease management of platform makefiles.


Usage
-----

The commands are largely self-documenting. To list xplatforms commands, run:

    $ drush --filter=xplatforms

for more detailed usage on a particular sub-command, run:

    $ drush xplatforms-<command> --help


Makefile management
-------------------

Xplatforms can register multiple repositories of makefiles. Each repository
should have the following directory layout:

    $ drush xplatforms-init
    Initialize xplatforms in the current directory? (y/n) y
    xplatforms initialized.
    $ tree
    .
    ├── includes
    │   └── 7
    │       ├── core.make
    │       ├── dev
    │       │   └── libraries.make
    │       ├── dev.make
    │       ├── modules
    │       │   ├── libraries.make
    │       │   ├── patches.make
    │       │   └── pins.make
    │       ├── modules.make
    │       └── themes.make
    ├── lockfiles
    └── stubs
        └── Drupal7.make

        6 directories, 9 files

While not strictly required, such a layout will greatly simplify managing
multiple platform makefiles in a consistent fashion. While not created by
default, dev/patches.make and dev/pins.make, as well as equivalents under a
'themes' directory, are also suggested, if required.

That said, the only *required* directories are stubs/ and lockfiles/.
Xplatforms will scan stubs/ to find platforms to manage and build. Realized
makefiles will be dropped in lockfiles.
