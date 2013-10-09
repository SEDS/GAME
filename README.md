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

Clone the GAME repo using the following commands. It is important that you checkout
the submodules as well. Otherwise, GAME will not build correctly.

    %> git clone [GAME repo] GAME
    %> cd GAME
    %> git submodule update --init --recursive

Set the **GAME_ROOT** environment variable to the location of the GAME 
repo, then use the following commands:

    %> %ACE_ROOT%\bin\mwc.pl -type [buildtool] GAME_ACE.mwc -features boost=1,xerces3=1,mfc=1
    %> devenv /useenv GAME_ACE.sln
    
Build the open solution file. The executables will be place in **GAME_ROOT\bin** 
and the shared libraries will be placed in **GAME_ROOT\lib** . The Lib directory **MUST** be on your path for modules to load in GME.
