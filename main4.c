#include <stdio.h>
#include <stdlib.h>

void func ();

int main()
{
    int x,y,*ptx,*pty;
    ptx = & x ;
    pty = & y;
    func(ptx , pty);
    printf("x=%i\n",x);
    printf("y=%i\n",y);
    return 0;
}

void func(int *x , int *y)
{
    *x = 5;
    *y=10;
}
