GAME
====

Building from Sources
---------------------

We assume you have the following third-party middleware downloaded
and installed on your build machine:

 * [Adaptive Communcation Environment (ACE)](http://www.dre.vanderbilt.edu/ACE)
 * [Boost.Spirit](http://boost-spirit.com/home/)
 * [Makefile, Project, Workspace Creator](http://www.ociweb.com/products/mpc)

For more information on building the above, please consult the following 
[Wiki Page](https://github.iu.edu/SEDS/GAME/wiki/Building-Required-Middleware).

Set the **GAME_ROOT** environment variable to the location of the GAME 
repo, then use the following commands:

    %> %ACE_ROOT%\bin\mwc.pl -type [buildtool] GAME_ACE.mwc
    %> devenv /useenv GAME_ACE.sln
    
Build the open solution file. The executables will be place in **GAME_ROOT\bin** 
and the shared libraries will be placed in **GAME_ROOT\lib**.
