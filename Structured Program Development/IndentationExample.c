
/*
* Program which demonstrate the indentation.
* if ( y == 8 )
* if ( x == 5 )
* puts( "@@@@@" );
* else
* puts( "#####" );
* puts( "$$$$$" );
* puts( "&&&&&" );
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5, y = 8;
    if(y == 8)
        if(x == 5)
    {
        puts("@@@@@");
    }
    else
    {
        puts("#####");
    }
    puts("$$$$$");
    puts("&&&&&");
    printf("\n\n");

    if(y == 8)
        if(x == 5)
    {
        puts("@@@@@");
    }
    else
    {
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }
    printf("\n\n");

    if(y == 8)
        if(x == 5)
    {
        puts("@@@@@");
    }
    else
    {
        puts("#####");
        puts("$$$$$");
    }
    puts("&&&&&");
    printf("\n\n");

    if(y == 7)
    {
        if(x = 5)
            puts("@@@@@");
    }
    else
    {
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }


    return 0;
}
