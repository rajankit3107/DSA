#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<string> s;

    s.push("love");
    s.push("Ankit");
    s.push("Raj");

    cout << "Top Element: " << s.top() << endl;

    s.pop();

    cout <<"New Top Element: "<<s.top() <<endl;

    cout << "Size of Stack: " << s.size() << endl;

    cout <<"Empty or not: " <<s.empty() << endl;


}