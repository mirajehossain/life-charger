#include<stdio.h>
int main()
{
    char str[100];
    while(gets(str)){
        if(str[0]=='\0')
            return 0;
        printf("%s\n",str);
    }
    return 0;
}
