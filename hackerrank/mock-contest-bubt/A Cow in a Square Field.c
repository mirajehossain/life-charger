#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,i;
    double a,r,area,circle,result;
    scanf("%d",&T);
    scanf("%lf",&a);
    for(i=1;i<=T;i++){
        scanf("%lf+",&r);
        area = a*a;
        circle = 3.14159* r *r;
        result = area - circle;
        printf("%lf\n",result);
    }
    return 0;
}


