#include<stdio.h>
int main()
{
    double a,b,c,r;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a<(b+c)){
        r = a+b+c;
        printf("Perimetro = %.1lf\n",r);
    } else {
        r =  ((a+b)/2)*c;
        printf("Area = %.1lf\n",r);
    }

    return 0;
}


