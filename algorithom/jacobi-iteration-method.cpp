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

    int n,i;
    float x,y,z,x0,y0,z0;

    cin>>n;
    x0 = y0 = z0 = 0;
    for(i = 0; i<n; i++) {
        x = fx(y0,z0);
        y = fy(x0,z0);
        z = fz(x0,y0);

        x0 = x;
        y0 = y;
        z0 = z;
        cout<<"x = "<<x<<" y = "<<y << " z = "<<z<<endl;
    }

return 0;
}
