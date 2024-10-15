#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    char arr[size];
    int hash[26] = {0};

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
        hash[arr[i]-'a']++;
    }

    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;
        cout << ch << "->" << hash[ch-'a'] << endl;
    }

    return 0;
}