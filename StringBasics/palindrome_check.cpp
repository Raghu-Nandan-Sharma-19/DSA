#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str) {
    int left = 0, right = str.size()-1;
    while(left < right) {
        if(str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);

    cout << isPalindrome(str) << endl;

    return 0;
}