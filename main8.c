#include <stdio.h>
#include <stdlib.h>

struct node
 {
    int data;
    struct node *next ;
 };

int main()
 {
    struct node n1 , n2 , n3 , n4;

    //as linked list :

    n1.next = & n2;
    n2.next = & n3;
    n3.next = & n4;
    n4.next = & n1;

    //acss.. :

    //n1 to n2
    n1.next -> data = 10;   // ((*n1.next)).data = 10;  like c in 1st term ***
    //n1 to n3
    n1.next -> next -> data = 20;





    printf("data n2 %i\n",n2.data);

    printf("data n3 %i\n",n3.data);
    return 0;
 }
