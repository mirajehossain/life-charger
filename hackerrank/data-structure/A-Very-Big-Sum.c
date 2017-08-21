#include<stdio.h>
int main()
{
    long int num[1000],sum=0;
    int i,j,n;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%ld",&num[i]);
        sum += num[i];
    }
    printf("%ld",sum);
    return 0;
}
