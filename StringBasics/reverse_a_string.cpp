#include<bits/stdc++.h>
using namespace std;

void reverse(string &str) {
    int left = 0, right = str.size()-1;
    while(left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    string str;
    getline(cin, str);

    reverse(str);

    cout << str << endl;

    return 0;
}