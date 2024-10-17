#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int left, int right) {
    if(left >= right) {
        return;
    }
    swap(s[left], s[right]);
    reverse(s, left + 1, right - 1);
}   

bool isPalindrome(string &s) {
    string duplicateString = s;
    int left = 0;
    int right = s.length() - 1;
    reverse(s, left, right);
    return (s == duplicateString);
}

int main() {
    string s;
    getline(cin, s);

    cout << isPalindrome(s) << endl;

    return 0;
}