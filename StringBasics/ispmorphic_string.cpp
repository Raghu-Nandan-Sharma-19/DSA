#include<bits/stdc++.h>
using namespace std;

bool isomorphicString(string &s, string &t) {
    int sMap[256] = {0}, tMap[256] = {0};
    int n = s.size();

    for(int i = 0; i < n; i++) {
        if(sMap[s[i]] != tMap[t[i]]) {
            return false;
        }
        sMap[s[i]] = i+1;
        tMap[t[i]] = i+1;
    }

    return true;
}

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);

    cout << isomorphicString(s, t) << endl;

    return 0;
}