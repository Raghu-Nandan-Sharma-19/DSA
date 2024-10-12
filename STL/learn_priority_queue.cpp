#include<bits/stdc++.h>
using namespace std;

void learnPriorityQueue() {
    // max heap
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);

    while(pq.empty() == false) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(10);
    pq1.push(8);

    while(pq1.empty() == false) {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;
}

int main() {
    learnPriorityQueue();
    return 0;
}