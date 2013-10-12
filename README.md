GAME
====

GAME is an framework that enables the development of lightweight components
for GME. It is also designed to address many of the shortcomings of using 
GME component frameworks, such as BON, BON2, and UDM.

See our [Wiki](https://github.iu.edu/SEDS/GAME/wiki) for uses of GAME.

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
repo. Also, add **%GAME_ROOT%\lib** and  **%GAME_ROOT%\lib** to the **PATH**
environment variable. Next, build GAME using the following commands:

    %> %ACE_ROOT%\bin\mwc.pl -type [buildtool] -features boost=1,xerces3=1,mfc=1 GAME_ACE.mwc 
    %> devenv /useenv GAME_ACE.sln
    
Build the open solution file. The executables will be place in 
**%GAME_ROOT%\bin** and the shared libraries will be placed in 
**%GAME_ROOT%\lib**.
