#include <stdio.h>
#include <stdlib.h>

int func ();
void func2();

int main()
{
    int x,y,z,*ptx,*pty;
    ptx = & x ;
    pty = & y;
    func2(ptx , pty);
    z=func(ptx , pty);
    printf("z=%i\n",z);

    return 0;
}

int func(int *x , int *y)
{
    *x =(*x) * 4 ;
    *y = (*y) * (*y);
    return (*x)+(*y);
}

void func2(int *x , int *y)
{
    printf("enter 1st num ");
    scanf("%i",&*x);
    printf("enter sec num");
    scanf("%i",&*y);
}
