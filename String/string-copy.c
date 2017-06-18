#include<stdio.h>
int main(){

    char str1[100], str2[100];
    int i;
    //gets(str1);
    scanf("%s",&str1);
    i =0;
    while(str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }
    ///str = strcpy(str2,str1); /// another way
    str2[i] = '\0'; /// optional bt its good practice
    printf("input string is %s\n", str1);
    printf("second string is %s\n",  str2 );
    printf("and total string is %d",i);
    return 0;
}
