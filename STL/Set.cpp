//set contains unique element

#include<iostream>
#include<set>

using namespace std;

int main() {
    set<int> s;

    s.insert(5); //time complexity of insert operation is o(n)
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    int size = s.size();

    for(auto i : s) {
        cout << i << endl   ;
    }

    s.erase(s.begin());

    for(auto i : s) {
        cout << i << endl   ;
    }cout << endl;

    cout << "5 is Present or not : " << s.count(5) << endl;
    cout << "5 is Present or not : " << s.count(-5) << endl;

    set<int>:: iterator itr = s.find(5);
    cout << "Value present at itr : " << *itr << endl;

}
