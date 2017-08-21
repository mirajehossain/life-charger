#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    ///puts(str);
   /// printf("%8.6s",str);
   int a,b;
   a = 10 , b = 6;
    printf("%*.*s",a,b,str);
    //printf("%*.*s",10,6,str);
    return 0;
}
