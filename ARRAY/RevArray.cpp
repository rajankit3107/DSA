#include<iostream>
using namespace std;

void reverseArr(int arr[], int n) {
    int startIdx = 0;
    int endIdx = n-1;

    while(startIdx  <=  endIdx) {
        swap(arr[startIdx], arr[endIdx]);
        startIdx++;
        endIdx--;

    }
   
}

void printArray(int arr[] , int n) {
    for(int i=0 ; i < n ; i++){
        cout <<arr[i] <<" ";
    }

    cout  << endl;
}



int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }

    reverseArr(arr, n);

    printArray(arr,n);
}