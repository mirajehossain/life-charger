#include<stdio.h>
int main()
{
    int i,j,n,sum,diferrence;
    scanf("%d",&n);
    int matrix[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("%d",matrix[0][2]);

    return 0;
}
