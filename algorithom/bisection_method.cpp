#include<bits/stdc++.h>
#include<iostream>
using namespace std;

/// x*x - 4x -10;

double func(double x) {
   return x*x - 4*x - 10;
   // return x*x*x - x*x + 2;
}

void bisection(double x1, double x2) {
    if(func(x1) * func(x2) >= 0) {
        cout<< " Root not exist between x1, x2"<<endl;
        return;
    }
    double x0;

    while((x2-x1) >=0.001) {
        x0 = (x1 + x2)/ 2;
        if(func(x0) == 0.00){
            break;
        }
        else if(func(x0) * func(x1) < 0) {
            x2 = x0;
        } else {
            x1 = x0;
        }
    }
    cout<<"Root is: " <<x0;
}
int main(){

    double x1= -2, x2= -1;
    bisection(x1,x2);
    return 0;


return 0;
}
