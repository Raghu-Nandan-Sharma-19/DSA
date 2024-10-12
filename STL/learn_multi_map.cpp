#include<bits/stdc++.h>
using namespace std;

void learnMultiMap() {
    multimap<int, char> mpp;

    mpp.insert({1, 'b'});
    mpp.insert({1, 'b'});
    mpp.insert({2, 'c'});
    mpp.insert({2, 'g'});
    mpp.insert({2, 'z'});
    mpp.insert({4, 'a'});
    mpp.insert({3, 'x'});
    mpp.insert({5, 's'});    
    mpp.insert({6, 'd'});

    for(auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }
    cout << endl;

    auto it = mpp.equal_range(2);
    for(auto i = it.first; i != it.second; i++) {
        cout << (*i).first << "->" << (*i).second << endl;
    }
}

int main() {
    learnMultiMap();
    return 0;
}