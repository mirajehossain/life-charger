#include <iostream>
using namespace std;

int main() {
	
	int n,i;
	cin>>n;
	int arr[n], count=0, largest;
	
	for(i=0; i<n; i++)
		cin>>arr[i];
		
	largest = arr[0];
	for (i = 0; i <n; i++) 
        {
		if (largest < arr[i])
			largest = arr[i];
	}
	for(i=0; i<n; i++){
		if(largest == arr[i])
			count++;
	}
 
	 cout<<count<<endl;
		
		
	return 0;
}
