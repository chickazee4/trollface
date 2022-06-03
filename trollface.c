#include <stdio.h>
#include <stdlib.h>
#include "trollface.h"

int
main(int argc,
     char **argv)
{
    if(argc==1) printf(happy);
    else{
        switch(argv[1][0]){
            case 'h':
                printf(happy);
                break;
            case 't':
                printf(trollge);
                break;
            case 'c':
                printf(creepypasta);
                break;
            case 'f':
            case 'g':
                printf(front);
                break;
            default:
                printf("Usage: trollface [h(appy)|t(rollge)|c(reepypasta)|f(ront)]\nPrints a trollface to the console.");
                break;
        }
    }
    return 0;
}
