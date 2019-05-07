#include<iostream>
using namespace std;

float fx(float y,float z) {
     float x = (5- y - z)/2;
     return x;
}
float fy(float x,float z) {
     float y = (15- 3*x - 2*z)/5;
     return y;
}
float fz(float x,float y) {
     float z = (8- 2*x - y)/4;
     return z;
}

int main() {

    int n,i = 0;
    float x,y,z,x0,y0,z0;
    x0 = y0 = z0 = 0;
    while(x != x0 & y != y0 && z != z0) {
        x = x0;
        y = y0;
        z = z0;

        x0 = fx(y0,z0);
        y0 = fy(x0,z0);
        z0 = fz(x0,y0);
        i++;
        cout<<"x = "<<x<<" y = "<<y << " z = "<<z<<endl;
    }

return 0;
}

