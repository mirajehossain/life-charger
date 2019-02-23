#include<bits/stdc++.h>
#define MAX_ITER 1000000

using namespace std;

double f(double x) {
    //return x * x -2 -3;
    return x*x*x - x*x + 2;
}


void falsePosition(double x1, double x2) {
    if (f(x1) * f(x2) >=0) {
        cout << "You are given wrong input";
        return;
    }
    double x0;
    for(int i=0; i<MAX_ITER; i++) {
        x0 = x1 - (f(x1) * ((x2- x1)/ (f(x2) - f(x1))));
        if(f(x0) == 0.00) {
            break;
        }
        if(f(x0) * f(x1) <0) {
            x2 = x0;
        } else {
            x1 = x0;
        }
    }

        cout<< "The root is: "<<x0<<endl;
}

int main() {

    double x1 = -200, x2 = 300;
    //double x1 = 1, x2 = 3;
    falsePosition(x1, x2);

return 0;
}
