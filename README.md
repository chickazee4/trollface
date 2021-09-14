# trollface
this program will print one of several trollface varieties to the console. 

## usage

each trollface has a short alias and a long name. any word can be used to select a trollface as long as it starts with the short alias. these are:
* h(appy) - default, invocation without a name will print this
* t(rollge)
* f(ront)
* d(ead)

## compilation

on unix-likes:

    gcc trollface.c -o trollface
    
the program can be installed with

    su -c "cp ./trollface /sbin"

it should also compile fine on windows but that is not officially supported.
