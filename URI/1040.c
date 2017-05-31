#include<stdio.h>
int main()
{
    double a,b,c,d,avarage,extra;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    a*=2;
    b*=3;
    c*=4;
    d*=1;
    avarage = ((a+b+c+d)/10);
    printf("Media: %.1lf\n",avarage);


    if(avarage>=7.0){
        printf("Aluno aprovado.\n");
    }else if(avarage>=5.0 && avarage<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&extra);
        printf("Nota do exame: %.1lf\n",extra);

        if(extra && avarage>=5.0){
            extra = (extra + avarage)/2;
                printf("Aluno aprovado.\n");
                printf("Media final: %.1lf\n",extra);
            }
        } else if(avarage<4.9){
                printf("Aluno reprovado.\n");
        }
    return 0;
}



