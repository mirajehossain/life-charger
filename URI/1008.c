#include<stdio.h>
int main()
{
    int NUMBER,workHours;
    double salaryPerHour,SALARY ;
    scanf("%d%d%lf",&NUMBER,&workHours,&salaryPerHour);
    SALARY = workHours*salaryPerHour;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2lf\n",SALARY);

    return 0;
}
