#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {



    int stIdx;
    int endIdx;

    stIdx = 0;
    endIdx = n-1;

    int mid = (stIdx + endIdx)/2;

    while(stIdx <= endIdx) {

        if(arr[mid] == key){

            return mid;
        }
        else if(key > arr[mid]) {

           stIdx =  mid + 1;
        }

        else{

            endIdx = mid - 1;
        }

        mid = (stIdx + endIdx)/2;
    }

    return -1;

}

void sort(int arr[], int n) {

    for(int i=1;i<n;i++) {
        int current = arr[i];
        int j = i-1;

        while(arr[j] > current && j>=0) {

            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = current;
        
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
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ; i ++) {

        cin >> arr[i];
    }

    int key;
    cin >> key;

    sort(arr, n);
    printArray(arr, n);
    binarySearch(arr,n,key);
}