#include<bits/stdc++.h>
using namespace std;

void learnUnorderedSet() {
    unordered_set<int> us;
    
    us.insert(2);
    us.insert(2);
    us.insert(5);
    us.insert(4);
    us.insert(3);
    us.insert(10);

    for(auto it : us) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    learnUnorderedSet();
    return 0;
}