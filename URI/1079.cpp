#include <iostream>
 #include <iomanip>

using namespace std;
 
int main() {
   int n;
   float a,b,c,result=0;
   std::cout << std::setprecision(1) << std::fixed;
   cin>>n;
        result=0;
  for(int i=1;i<=n;i++){
  	cin>>a>>b>>c;
  	a*= 2;
  	b*= 3;
  	c*= 5;
  	result =a+b+c;
   	cout<< result/10<<endl;
  }

  
    return 0;
}
