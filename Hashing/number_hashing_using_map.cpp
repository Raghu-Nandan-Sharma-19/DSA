#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    map<int, int> hash;
    for(int i = 0; i < size; i++) {
        hash[arr[i]]++;
    }
    
    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << num << "->" << hash[num] << endl;
    }

    return 0;
}