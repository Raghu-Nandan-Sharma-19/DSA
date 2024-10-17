#include<bits/stdc++.h>
using namespace std;

bool anagramStrings(string &s, string &t) {
    if(s.length() != t.length()) return false;

    vector<int> count(26, 0);

    for(char c : s) count[c-'a']++;
    for(char c : t) count[c-'a']--;

    for(int i : count) {
        if(i != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);

    cout << anagramStrings(s, t) << endl;

    return 0;
}