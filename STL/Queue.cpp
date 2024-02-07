#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue<string> q;

    q.push("Ankit");
    q.push("Raj");
    q.push("Coder");

    cout << "First Element : " << q.front() << endl;
    q.pop();
    cout <<"New First element : " << q.front()<<endl;

    cout <<"Size after pop : " << q.size() << endl;
}