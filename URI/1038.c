#include<stdio.h>
int main()
{
    int X, Y;
    double p1,p2,p3,p4,p5,a,result;
    scanf("%d%d",&X,&Y);
    if(X==1){
        a = 4.00;
        result = a*Y;
        printf("Total: R$ %.2lf\n",result);
    } else if(X==2){
        a = 4.50;
        result = a*Y;
        printf("Total: R$ %.2lf\n",result);
    } else if(X==3){
        a = 5.00;
        result = a*Y;
        printf("Total: R$ %.2lf\n",result);
    } else if(X==4){
        a = 2.00;
        result = a*Y;
        printf("Total: R$ %.2lf\n",result);
    } else if(X==5){
        a = 1.50;
        result = a*Y;
        printf("Total: R$ %.2lf\n",result);
    }

    return 0;
}

