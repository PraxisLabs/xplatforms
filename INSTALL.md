XPLATFORMS
==========

Install Drush 7.x
-----------------

To use xplatforms effectively, you need a very recent version of Drush (7.x),
as well as a custom Drush extension.

Install make_diff
-----------------

The 'make_diff' extension allows two makefiles to be compared easily. Instead
of installing it via 'drush dl', clone the repo from github. We put it directly
in the local drush install so as not to interfere with other Drush function-
ality on the server.

    $ git clone https://github.com/PraxisLabs/make_diff.git ~/drush/commands/make_diff


