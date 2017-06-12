#include<stdio.h>
int main(){
    long int i,j,k,n,max,min,count,total;

    while (scanf("%ld%ld",&i,&j) !=EOF){
        total=0;
        if(i<=j){
            max = j;
            min = i;
        } else if(i>=j){
            max = i;
            min = j;
        }

        for(k= max;k>=min; k--){
            n = k;
            count = 1;
            while(n!=1){
                count++;
                if(n%2 ==0){
                    n = n/2;
                } else {
                    n = 3*n+1;
                }
            }
            if(count>=total){
                total = count;
            }
        }
    printf("%ld %ld %ld\n",i,j,total);
    }

return 0;
}


