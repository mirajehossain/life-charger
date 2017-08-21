#include<stdio.h>

long int summation(int n){
    long int num[1000],sum = 0;
    int i;
    for(i=0;i<n;i++){
        scanf("%ld",&num[i]);
        sum+= num[i];
    }
    printf("%ld",sum);
    return sum;

}
int main()
{
    long int num[1000],sum=0;
    int i,j,n;
    scanf("%d",&n);
    summation(n);
    return 0;
}

