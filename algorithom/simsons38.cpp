#include<iostream>
#include<math.h>
using namespace std;

float f(float x) {
    return (x*x*x)+ 1;;
}
int main() {

    float a = 1, b = 2, i, h, x1, x2;
    h = (b - a)/ 3;
    x1 = a + h;
    x2 = a + 2 * h;
    i = (3 * h/ 8) * (f(a) + 3 * f(x1) + 3 * f(x2) + f(b));
    cout<<i;
return 0;
}


