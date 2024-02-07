#include<iostream>
using namespace std;

//for minimum
int get_Min(int arr[] , int n){
    int min = INT_MAX;

    for(int i = 0 ; i < n ; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

//for maximum
int get_Max(int arr[], int n) {

    int max = INT_MIN;
    
    for(int i = 0; i < n ; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    //returning max value
    return max;
}

int main() {

    int size;
    cin >> size;

    int arr[100] ;

    for(int i=0 ; i<size ; i++) {
        cin >> arr[i];

    }

    cout << "Maximum Value is: " << get_Max(arr, size) << endl;
    cout << "Minimum Value is: " << get_Min(arr, size) << endl;

    
}