#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> v;
    cout <<"size -> " << v.capacity() << endl ;

    v.push_back(1);
    cout <<"size -> " << v.capacity() << endl ;

    v.push_back(2);
    cout <<"size -> " << v.capacity() << endl ;

    //size becomes double because vector doubles its space when completely filled

    v.push_back(3);
    cout <<"size -> " << v.capacity() << endl ;

    cout << "Element at 2nd index -> " << v.at(2) << endl;

    cout << "First element -> " << v.front() << endl;

    cout << "Last element -> " << v.back() << endl;

    cout << "Before pop: " ;
    for(int i : v) {

        cout << i << " ";
    }cout << endl;

    v.pop_back();

    cout << "After pop: ";
    for(int i : v) {
        cout << i << " ";
    }cout << endl;

    cout << "Before clear size: " <<  v.size() << endl;

    v.clear();

    cout << "After clear size: " << v.size() << endl;

}