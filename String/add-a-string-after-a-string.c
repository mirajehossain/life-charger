#include<stdio.h>
int main(){

    char str[100],str1[100];
    scanf("%s%s",&str,&str1);
    int i,j;
    for(i=0; str[i] !='\0'; i++);
    str[i]= ' ';
    i++;

    printf("%d\n",i);
    printf("%s\n",str);

    for(j=0; str1[j]!='\0';j++){
        str[i+j] = str1[j];
    }
    str[i+j] = str1[j];
    printf("%s",str);

    return 0;
}
