#include<iostream>
#include<math.h>
using namespace std;

float f(float x) {
    return exp(x);
}
int main() {

    float a = -1, b = 1, i, h, x1;
    h = (b - a)/ 2;
    x1 = a + h;
    i = (b - a) * ((f(a) + 4 * f(x1) + f(b))/6);
    cout<<i;
return 0;
}

