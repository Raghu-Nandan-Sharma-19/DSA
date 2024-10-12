#include<bits/stdc++.h>
using namespace std;

void learnSet() {
    set<int> st;
    st.insert(2);
    st.insert(21);
    st.insert(21);
    st.insert(12);
    st.insert(211);
    st.insert(213);
    st.insert(214);

    for(auto it : st) {
        cout << it << " ";
    }
    cout << endl;

    auto it = st.find(12);
    if(it != st.end()) {
        cout << *it << endl;
    }

    cout << st.count(211) << endl;
    st.erase(12);

    for(auto it : st) {
        cout << it << " ";
    }
    cout << endl;

    st.emplace(12);

    auto it1 = st.lower_bound(11);
    cout << *it1 << endl;

    auto it2 = st.upper_bound(213);
    cout << *it2 << endl;
}

int main() {
    learnSet();
    return 0;
}