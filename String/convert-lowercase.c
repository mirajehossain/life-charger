#include<stdio.h>
#include<string.h>
int main()
#define MAX_SIZE 200
{
    int i;
    char string[MAX_SIZE];
    printf("Enter your string : ");
    gets(string);

  ///  strupr(string); /// using built in function
    for(i=0; i<=string[i] != '\0'; i++){
        if(string[i]>='A' && string[i]<='Z'){
            string[i] = string[i] + 32;
        }
    }
    printf("Lowercase string is : %s\n",string);
    return 0;
}
