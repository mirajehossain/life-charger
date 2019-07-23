#include<iostream>

using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b  = temp;
}

int partition(int arr[], int l, int h){
    int pi = arr[h];
    int i = l- 1;
    for(int j = l; j <= h - 1; j++) {

        if(arr[j] <= pi){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i+1;
}

quickSort(int arr[], int l, int h) {

    if(l < h) {
        int pivot = partition(arr, l, h);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, h);
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    quickSort(arr, 0, n - 1);
    printArray(arr, n);
return 0;
}
