#include <stdio.h>
#include <stdlib.h>

int main()
{
    //data type :
    int x;
    int *pt1,**pt2,***pt3;
    //def  val in add :
     pt1 = & x ;
     pt2 = & pt1;
     pt3 = & pt2;

    //change val of x from 1 :
    *pt1=20;

   //change val of x from 2 :
    **pt2 = 5;

    //change val of x from 3 :
      ***pt3 = 6;

    //print val of x :
    printf("%i \n",x);




   //print add x from 1 , 2 and 3 :
     printf("add x by 1 =  %p \n",pt1);
      printf("add x by 2 = %p \n",*pt2);
       printf("add x by 3 = %p \n",**pt3);

     //print add 1 from 2 and 3 :
      printf("add 1 by 2 = %p \n",pt2);
       printf("add 1 by 3 = %p \n",*pt3);

      //print add 2 from 3 :
       printf("add 2 by 3 = %p \n",pt3);

    return 0;
}
