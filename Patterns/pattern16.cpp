#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    char ch = 'A';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    print(n);

    return 0;
}