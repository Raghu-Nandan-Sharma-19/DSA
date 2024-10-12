#include<bits/stdc++.h>
using namespace std;

void learnList() {
    list<int> ls = {6, 7};
    ls.push_front(5);
    ls.emplace_front(4);

    for(auto it:ls) {
        cout << it << " ";
    }
    cout << endl;

    cout << ls.front() << endl;
}

int main() {
    learnList();
    return 0;
}