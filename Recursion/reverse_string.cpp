#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int left, int right) {
    if(left >= right) {
        return;
    }
    swap(s[left], s[right]);
    reverse(s, left + 1, right - 1);
}

string reverseString(string &s) {
    int left = 0;
    int right = s.size() - 1;
    reverse(s, left, right);
    return s;
}

int main() {
    string s;
    getline(cin, s);

    cout << reverseString(s) << endl;

    return 0;
}