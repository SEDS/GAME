GAME
====

GAME is an framework that enables the development of lightweight components
for GME. It is also designed to address many of the shortcomings of existing 
GME component frameworks, such as BON, BON2, and UDM.

Building from Source
---------------------

We assume you have the following third-party middleware downloaded
and installed on your build machine:

 * [Adaptive Communcation Environment (ACE)](http://www.dre.vanderbilt.edu/ACE)
 * [Boost.Spirit](http://boost-spirit.com/home/)
 * [Makefile, Project, Workspace Creator](http://www.ociweb.com/products/mpc)
 * [GME](https://forge.isis.vanderbilt.edu/gme)

For more information on building the above, please consult the [Wiki](../../wiki/Building-Required-Middleware).

Clone the GAME repo, then set the ```GAME_ROOT```  environment variable:

    set GAME_ROOT=location of GAME
    
Update your ```PATH```:

    set PATH=%PATH%;%GAME_ROOT%\\bin;%GAME_ROOT%\\lib
    
Last, build GAME using the following commands:

    %ACE_ROOT%\bin\mwc.pl -type [buildtool] -features boost=1,xerces3=1,mfc=1 GAME_ACE.mwc 
    devenv /useenv GAME_ACE.sln
    
Build the opened solution file. The executables will be place in 
```%GAME_ROOT%\bin``` and the shared libraries will be placed in 
```%GAME_ROOT%\lib```.
