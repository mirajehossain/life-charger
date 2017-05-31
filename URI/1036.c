#include<stdio.h>
int main()
{
    double A,B,C,R1,R2,X;
    scanf("%lf%lf%lf",&A,&B,&C);
    X = (B*B)-(4*A*C);
    if(A!=0 && X>0){
    R1 = (-B+sqrt(X))/(2*A);
    R2 = (-B-sqrt(X))/(2*A);
    printf("R1 = %.5lf\n",R1);
    printf("R2 = %.5lf\n",R2);
    } else{
        printf("Impossivel calcular\n");
    }
    return 0;
}

