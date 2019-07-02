#include <iostream>
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
	int newArr[n] = {0}, finalArr[n]= {0};
	for(int k = 1; k <= 3; k++) {
        insertionSort(arr, n, k);
        for(int i = 0; i< n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
    }
	return 0;
}

