#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int a,b,c;
    double PI = 3.1415;
    a = 8;
    b = 6;
    c = 7;
    double A,B,C;
    A = (double)(b*b + c*c - a*a)/(double)(2*b*c);
    B = (double)(a*a + c*c - b*b)/(double)(2*a*c);
    C = (double)(a*a + b*b - c*c)/(double)(2*a*b);

    A = acos(A)*180/PI;
    B = acos(B)*180/PI;
    C =  180 - A - B;
    cout<<"Angel A is: "<< A <<" degree "<<endl
        <<"Angel B is: "<< B <<" degree "<<endl
        <<"Angel C is: "<< C <<" degree "<<endl ;
    return 0;
}


