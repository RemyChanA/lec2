#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={0};
    int *pti;
    pti = a;
    for (int i =0 ; i<=9 ; i++)
    {
        scanf("%i",pti);
        pti++;
    }
   //print using pti
    pti=a;
     for (int i =0 ; i<=9 ; i++)
    {
       pti[i]=i;
      printf("%i \n",pti[i]);
    }

    return 0;
}
