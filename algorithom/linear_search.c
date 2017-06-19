#include<stdio.h>
int main()
{
    int a[100], b,i,key,casee=1;
    while(scanf("%d\n",&b) !=EOF){
        for(i=0;i<b;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&key);
        for(i=0;i<b;i++){
            if(a[i]==key)
               break;
        }
        printf("case %d : ", casee);
        casee++;
            if(i == b){
                printf("Not found\n");
            } else{
                printf("%d\n",i+1); /// what location found my key
            }
    }
    return 0;
}
