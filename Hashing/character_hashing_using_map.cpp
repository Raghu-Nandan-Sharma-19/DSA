#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    char arr[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    map<char, int> hash;
    for(int i = 0; i < size; i++) {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;
        cout << ch << "->" << hash[ch] << endl;
    }
    
    return 0;
}