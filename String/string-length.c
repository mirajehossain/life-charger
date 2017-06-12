#include<stdio.h>

int main(){

    char str[100];
    int length=0, len;
    gets(str);
    while(str[length] != '\0'){
        length++;
    }
    ///len = strlen(str); /// another way
    printf("string - %s length is - %d",str,length);
    return 0;
}
