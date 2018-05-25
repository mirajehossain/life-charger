#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
std::cout << std::setprecision(1) << std::fixed;

   int n,x,y;
   float res;
 
    cin>>n;
    res = 0;
    for(int i=1;i<=n;i++){
	cin>>x>>y;
	if(y==0){
	cout<<"divisao impossivel"<<endl;
	continue;
	} 
	
	res = (float)x/(float)y;
	cout<<res<<endl;
	
  }
 
  
    return 0;
}
