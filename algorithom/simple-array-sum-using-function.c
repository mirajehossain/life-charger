#include<stdio.h>

int sumArr(int n,int items[]){
        int sum=0,i;
    for(i =0;i<n;i++){
         sum +=items[i];
        }
    return sum;
}
int main(){
    int n,i,arr[100],resultis;
    scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    resultis = sumArr(n,arr);
    printf("%d",resultis);

return 0;
}

