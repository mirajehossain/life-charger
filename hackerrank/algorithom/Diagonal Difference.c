#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    scanf("%i", &n);
    int a[n][n];
    for (int a_i = 0; a_i < n; a_i++) {
       for (int a_j = 0; a_j < n; a_j++) {
          scanf("%i",&a[a_i][a_j]);
       }
    }
    
    int i, j=1;
    int sum=0,sum1=0;
    for(i=0;i<n;i++){
        sum1+= a[i][i];
    }
    
    for(i=0;i<n;i++){
            sum += a[i][n-j];
           j++;
    }
    int res;
    if(sum>sum1){
        res = sum-sum1;
    } else {
        res = sum1 - sum;
    }
    printf("%d\n", res);
    return 0;
}
