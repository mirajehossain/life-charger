#include<iostream>
#include<math.h>
using namespace std;

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
    cout<< "Enter Co-ordinate of A: ";
    cin>> a.x>>a.y;

    cout<< "Enter Co-ordinate of B: ";
    cin>> b.x>>b.y;

    cout<< "The Distance between A and B : "<< getDistance(a,b)<<endl;
    return 0;

}

