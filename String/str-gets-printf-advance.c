#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    ///puts(str);
   /// printf("%8.6s",str);
    printf("%*.*s",10,6,str);
    return 0;
}
