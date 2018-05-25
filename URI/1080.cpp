#include <iostream>
using namespace std;
 
int main() {
   int n=100, number,h=0, position=0;
  for(int i=1;i<=n;i++){
	cin>>number;
	if(number>h){
	h = number;
	position = i;
	}
  }
  cout<<h<<endl<<position<<endl;
  return 0;
}
