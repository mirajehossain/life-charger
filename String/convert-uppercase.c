#include<stdio.h>
int main()
#define MAX_SIZE 200
{
    int i;
    char string[MAX_SIZE];
    printf("Enter your string : ");
    gets(string);
    for(i=0; i<=string[i] != '\0'; i++){
        if(string[i]>='a' && string[i]<='z'){
            string[i] = string[i] - 32;
        }
    }
    printf("Uppercase string is : %s\n",string);
    return 0;
}

