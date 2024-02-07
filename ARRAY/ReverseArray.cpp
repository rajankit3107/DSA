#include<iostream>
using namespace std;

void RevArray(int arr[], int n) {
    int stIdx = 0;
    int endIdx = n-1;

    while(stIdx <= endIdx) {
        swap(arr[stIdx],arr[endIdx]);
        stIdx++;
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
    cin >>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    RevArray(arr, n);
    printArray(arr, n);

}