#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector <int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Binary Search for 5 : " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "Binary Search for 6 : " << binary_search(v.begin(), v.end(), 6) << endl;

}