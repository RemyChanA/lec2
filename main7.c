#include <stdio.h>
#include <stdlib.h>

struct cat
{
 int kitty ;
 int semba ;
 char lolo;
};

struct dog
{
   int max;
   char dikky;
   int roy;
};

int main()
{
    struct cat n;
    n.kitty = 10;
    printf("cat 1 = %i \n",n.kitty);
    return 0;
}

