//priority queue means forst element is greater then the rest element
//default priority queue is maxHeap

#include<iostream>
#include<queue>

using namespace std;

int main(){
    //maxHeap

    priority_queue<int> maxHeap;

    //minHeap

    priority_queue<int, vector<int>, greater<int> >minHeap;

    maxHeap.push(1);
    maxHeap.push(3);
    maxHeap.push(2);
    maxHeap.push(0);
    maxHeap.push(5);

    int n = maxHeap.size();

    for(int i = 0 ; i < n ; i++) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }cout <<endl;

    minHeap.push(5);
    minHeap.push(1);
    minHeap.push(0);
    minHeap.push(4);
    minHeap.push(3);

    int m = minHeap.size();

    for(int i = 0 ; i < m ; i ++ ) {
        cout << minHeap.top() <<" ";
        minHeap.pop();
    }cout << endl;
    
}