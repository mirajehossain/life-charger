#include<stdio.h>
///compare_string(char [], char []);
int main()
{
    int flag;
    char a[1000],b[1000];
    printf("enter first string : \n");
    gets(a);
    printf("Enter second string : \n");
    gets(b);

    flag = compare_string(a,b);
    if(flag == 0){
        printf("string are equaled");
    } else  {
        printf("String are not equaled");
    }

    return 0;
}

int compare_string(char string1[], char string2[]){
    int c = 0;
    while(string1[c] == string2[c]){
        if(string1[c] == '\0' || string2[c]=='\0'){
            break;
        }
        c++;
    }
    if(string1[c] =='\0' && string2[c] =='\0')
        return 0;
    else
        return 1;
}
