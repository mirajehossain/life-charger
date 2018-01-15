/**
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

**/
#include<stdio.h>
int main(){
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=n-1;j>=i ;j--){
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}
/**


#include <stdio.h>

int main()
{
    int i, j, k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("*");
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=5;j>i;j--)
        {
                printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("*");
        }
        printf("\n");
    }

    return 0;
}

**/
