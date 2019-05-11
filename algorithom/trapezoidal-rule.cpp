
#include<iostream>
using namespace std;

float f(float x) {
    return (x*x*x)+ 1;
}
int main() {

    float a = 1, b = 2, result;
    result = ((b - a) * (f(a) + f(b)))/ 2;
    cout<<result;
return 0;
}

