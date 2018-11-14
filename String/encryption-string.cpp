#include <iostream>
#include <string.h>

using namespace std;

int main() {

	int n, s, i;
	cin>>n;
	char str[n];
	cin>>str;
	

	for(i=0; i<n; i++){

	if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122 )){
		if(str[i] >=120){
			str[i] = str[i]-26+2;
		} else {
			str[i] = str[i]+2;
		}
	}
		
	}
 
 cout<<str<<endl;

	return 0;
}
