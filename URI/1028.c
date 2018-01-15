#include<stdio.h>
int main(){
    int a,b,t,i,j,max,min,res;
    scanf("%d",&t);
    for(a=1;a<=t;a++){
        scanf("%d%d",&i,&j);
           if(i<=j){
            max = j;
            min = i;
        } else if(i>=j){
            max = i;
            min = j;
        }

         while(max%min !=0){
            res = max %min;
            max = min;
            min = res;
         }

      printf("%d\n",min);

    }


return 0;
}
