#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Point {
    int x,y;
};

double getDistance(struct Point a, struct Point b){
    double result;
    result = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
    return result;
}


int main(){
    struct Point a,b;
    printf("Enter Co-ordinate of A: ");
    scanf("%d %d",&a.x, &a.y);

    printf("Enter Co-ordinate of B: ");
    scanf("%d %d",&b.x, &b.y);

    printf("The Distance between A & B of Co-ordinates is %lf: ", getDistance(a,b));

    return 0;

}
