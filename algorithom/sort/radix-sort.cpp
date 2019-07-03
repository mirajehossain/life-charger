#include <iostream>
#include <math.h>
using namespace std;

void insertionSort(int arr[], int n, int pos) {

	int key;
	for(int i = 1; i < n ; i++) {
        int key = (arr[i]/pos)%10;
        int index = i - 1;
        while(index >= 0 && (arr[index]/pos)%10>key) {
            int temp = arr[index+1];
            arr[index + 1] = arr[index];
            arr[index] = temp;
            index = index -1;
        }
    }
}
int main() {
	int n = 5;
	int arr[n] = {123,432,454,333,122};
	int max = 0;
	for(int i =0; i< n; i++) {
		if(max < floor(log10(arr[i]) + 1)){
			max = floor(log10(arr[i]) + 1);
		}
	}
	for(int k = 1; k <= pow(10, max-1); k *= 10) {
        insertionSort(arr, n, k);
        for(int i = 0; i< n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
    }
	return 0;
}
