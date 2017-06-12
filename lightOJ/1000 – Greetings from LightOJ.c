#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("Case %d = %d\n",i,a+b);
    }
    return 0;
}

/*
    int sum=0,i,j,n,m,casen=1;
    scanf("%d",&n);

     for(i=0;i<n;i++){
        for(j=0; j<n; j++){
            scanf("%d",&m);
            sum  = sum+ m;
        }
        printf("case %d : ", casen);
        casen++;
        printf("%d\n",sum);
        sum = 0;
    }
*/
