#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=n;j>i;j--){
            printf("*");
        }
        for(k=1;k<=i;k++){
            printf("#");
        }
       printf("\n");
    }
    return 0;
}

