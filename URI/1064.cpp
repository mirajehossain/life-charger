#include <iostream>
 #include <iomanip>

using namespace std;
 
int main() {
   int n=6,posCount=0;
   float avarage=0,result=0;
   float number;
       std::cout << std::setprecision(1) << std::fixed;
   for(int i=0;i<n;i++){
	cin>>number;
	
	if(number>0){
		posCount++;
		result += number;
	} 
   }
   avarage = result/posCount;
   
   cout<< posCount<<" valores positivos"<<endl<<avarage<<endl;
    return 0;
}
