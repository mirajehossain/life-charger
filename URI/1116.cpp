#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
       std::cout << std::setprecision(1) << std::fixed;

    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(y==0){
       cout<<"divisao impossivel"<<endl;
        } else {
        float res;
        res = (float)x/(float)y;
               cout<<res<<endl;
        }
    }
 
    return 0;
}
