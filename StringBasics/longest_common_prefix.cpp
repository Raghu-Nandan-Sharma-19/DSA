#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &str) {
    int n = str.size();
    sort(str.begin(), str.end());
    string ans = "";
    string first = str[0], last = str[n-1];

    for(int i = 0; i < min(first.length()-1, last.length()-1); i++) {
        if(first[i] != last[i]) break;
        ans += first[i];
    }  

    return ans;
}

int main() {
    int size;
    cin >> size;
    vector<string> input;

    for(int i = 0; i < size; i++) {
        string str;
        cin >> str;
        input.push_back(str);
    }

    cout << longestCommonPrefix(input) << endl;

    return 0;
}