#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,a,arr[100],distance=0,displacement=0,count=0;
    scanf("%d",&N);
     for(i=1;i<=N;i++){
        scanf("%d",&arr[i]);

    }
    for(i = 1;i<=N;i++){
            count++;
        distance+= arr[i];
    }
    printf("distance %d\n",distance);

    displacement = arr[1]+ arr[count];
    printf("displacement %d\n",displacement);


    return 0;
}


