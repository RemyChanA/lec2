#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    short z;
    char y;

    int *ptx;
    char *pty;
    short *ptz;

    ptx = & x;
    pty = & y;
    ptz = & z;

    *ptx =8;
    *pty ='A';
    *ptz=2;

    printf("%i\n",x);
    printf("%c\n",y);
    printf("%u\n",z);

    return 0;
}
