#include <stdio.h>
#include <stdlib.h>
#include "trollface.h"

int
main(int argc,
     char **argv)
{
    if (argc == 1 || argv[1][0] == 'h')
        printf(happy);
    else if (argv[1][0] == 't')
        printf(trollge);
    else if (argv[1][0] == 'c')
        printf(creepypasta);
    else if (argv[1][0] == 'f' | argv[1][0] == 'g')
        printf(front);
    else
        printf("Usage: trollface [h(appy)|t(rollge)|c(reepypasta)|f(ront)]\nPrints a trollface to the console.");
    exit(0);
}