#include<iostream>
#include<map>

using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Ankit"; // 1 -> is key and Ankit -> is Value
    m[3] = "Loves";
    m[2] = "Cricket";

    //m.insert({5, "bheem"});

    for(auto i : m) {
        cout << i.first <<" " <<i.second << endl;
    }

    cout <<"Finding 13 : " <<m.count(13) << endl;
    cout <<"Finding 3 : " <<m.count(3) << endl;

    m.erase(3);
    cout <<"After Erase : " << endl;
    for(auto i : m) {
        cout << i.first <<" " << i.second << endl;
    }
    

}   