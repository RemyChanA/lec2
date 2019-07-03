#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int *ptr;
    ptr = & x;
    *ptr = 10;
    printf("%i\n",x);
    return 0;
}
