GAME
====

Building from Sources
---------------------

We assume you have the following third-party middleware downloaded
and installed on your build machine:

 * [Adaptive Communcation Environment (ACE)](http://www.dre.vanderbilt.edu/ACE)
 * [Boost.Spirit](http://boost-spirit.com/home/)
 * [Makefile, Project, Workspace Creator](http://www.ociweb.com/products/mpc)

For more information on building the above, please consult the following Wiki Page.

Set the **GAME_ROOT** environment variable, then use the following command:

    %> %ACE_ROOT%\bin\mwc.pl -type [buildtool] GAME_ACE.mwc
    %> # build the generated workspace

The executables will be place in **GAME_ROOT\bin** and **GAME_ROOT\lib**.
