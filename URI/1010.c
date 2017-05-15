#include<stdio.h>
int main()
{
    int p1Code,p1UnitNumber;
    int p2Code,p2UnitNumber;
    double p1PerUnitPrice,p2PerUnitPrice,calculate;

    scanf("%d%d%lf",&p1Code,&p1UnitNumber,&p1PerUnitPrice);
    scanf("%d%d%lf",&p2Code,&p2UnitNumber,&p2PerUnitPrice);

    calculate = (p1UnitNumber*p1PerUnitPrice)+(p2UnitNumber*p2PerUnitPrice);
    printf("VALOR A PAGAR: R$ %.2lf\n",calculate);
    return 0;
}

