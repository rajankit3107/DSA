#include<iostream>
using namespace std;

void ReverseString(char name[], int n){
    int stIdx = 0;
    int endIdx = n-1;

    
    while(stIdx < endIdx) {
        swap(name[stIdx++], name[endIdx--]);
    }
    
}

int getLength(char name[]) {

    int count  = 0;

    for(int i = 0 ; name[i] != '\0' ; i++){
        count++;
    }

    return count;
}



int main() {
    char name[20];

    cout << "Enter your Name : " ;
    cin >> name;

    cout << "Your Name is : " << name << endl;

    int len = getLength(name);

    cout << "Length of your name is : " << len << endl;

    ReverseString(name , len);
    cout << "Your reversed Name is : " << name << endl;


    return 0;
}