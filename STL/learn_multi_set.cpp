#include<bits/stdc++.h>
using namespace std;

void learnMultiSet() {
    multiset<int> ms;
    
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(0);
    ms.insert(21);
    ms.insert(21);
    ms.insert(21);

    for(auto it : ms) {
        cout << it << " ";
    }
    cout << endl;

    auto it = ms.find(1);
    cout << *it << endl;

    auto it1 = ms.erase(1);
    for(auto it : ms) {
        cout << it << " ";
    }
    cout << endl;

    auto it2 = ms.erase(ms.find(2));
    for(auto it2 : ms) {
        cout << it2 << " ";
    }
    cout << endl;

    cout << ms.count(2);
}

int main() {
    learnMultiSet();
    return 0;
}