#include<stdio.h>
int main()
{
    char name;
    double salary,TOTAL,sell;
    scanf("%s",&name);
    scanf("%lf%lf",&salary,&sell);
    TOTAL = salary+(sell * 15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);

    return 0;
}

