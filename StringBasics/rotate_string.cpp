#include<bits/stdc++.h>
using namespace std;

bool rotateString(string &s, string &goal) {
    if(s.length() != goal.length()) {
        return false;
    }
    string doubledS = s+s;
    return doubledS.find(goal) != string::npos;
}

int main() {
    string s;
    getline(cin, s);
    string goal;
    getline(cin, goal);

    cout << rotateString(s, goal) << endl;

    return 0;
}