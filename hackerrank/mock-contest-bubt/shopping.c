#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,T,M,N,P[100],sum=0;
    scanf("%d",&T);

    for(i=1;i<=T;i++){
        scanf("%d",&M);
        scanf("%d",&N);
        sum = 0;
        for(j=1;j<=N;j++){
            scanf("%d",&P[j]);
            sum+=P[j];
        }
        if(sum <= M){
            printf("Go for shopping\n");
        } else {
            printf("You don't have enough money\n");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

