#include<iostream>
using namespace std;

int interection(int arr1[] ,int arr2[], int n, int m){
    
    for(int i=0;i<n;i++) {
        int element = arr1[i];

        for(int j=0 ; j<m ; j++) {
            if(element == arr2[j]){
                return element;
                break;
            }
        }
    }


}

int main() {

    int n;
    cin>>n;

    int arr1[n];

    for(int i = 0 ; i < n ; i ++) {
        cin>> arr1[i];
    }

    int m;
    cin >> n;

    int arr2[m];

    for(int i=0;i<n;i++) {
        cin >> arr2[i];
    }

    cout << "Intersecting element is: " << interection(arr1, arr2, n, m) << endl;

}