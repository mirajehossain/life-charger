#include <stdio.h>
 #define MAX 1000
int main()
{
    char text1[MAX], text2[MAX],finalstr[MAX];
    int i,j;
    gets(text1);
    gets(text2);
    i = 0;

    while(text1[i] != '\0'){
        finalstr[i] = text1[i];
        i++;
    }
    j = 0;
    while(text2[j] != '\0'){
        finalstr[i] = text2[j];
        i++;
        j++;
    }

    finalstr[i] = '\0';
    printf("final text = %s \n",finalstr);
    printf("%d\n",i);
    printf("%d\n",j);


    return 0;
}
