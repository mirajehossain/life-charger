#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,N,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        if(N<0){
            printf("NEGATIVE\n");
        } else if(N>0){
            printf("POSITIVE\n");
        } else {
            printf("ZERO\n");
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

