#include<stdio.h>
int main()
{
double spentTimeinHours, avarageSpeed, totalAmountOfFuel;
scanf("%lf%lf",&spentTimeinHours,&avarageSpeed);
totalAmountOfFuel = (spentTimeinHours*avarageSpeed)/12;
printf("%.3lf\n",totalAmountOfFuel);
return 0;
}
