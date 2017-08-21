#include<stdio.h>
int main(){

    int a,b;
    int *pointer1,*pointer2;
    pointer1 = &a;
    pointer2 = &b;
    a = 3;
    b = 5;

 ///   printf("%d %d %d %d\n",*pointer1,a,*pointer2,b);
 ///   *pointer1 = *pointer2;

    printf("%d %d %d %d\n",*pointer1,a,*pointer2,b);
    pointer1 = pointer2; /// pointer1 address == pointer2 er address same just address ta

    printf("%d %d %d %d\n",*pointer1,a,*pointer2,b);
    a = 10, b = 15;
    printf("%d %d %d %d\n",*pointer1,a,*pointer2,b);

    return 0;
}
