#include<bits/stdc++.h>
using namespace std;

void learnQueue() {
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(q.empty() == false) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    learnQueue();
    return 0;
}