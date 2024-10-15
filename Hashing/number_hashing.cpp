#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    int maxi = INT_MIN;

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }

    int hash[maxi+1] = {0};
    for(int i = 0; i < size; i++) {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        if(num > maxi) cout << "0" << endl;
        else cout << num << "->" << hash[num] << endl;
    }

    return 0;
}