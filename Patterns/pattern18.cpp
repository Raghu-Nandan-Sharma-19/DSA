#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    char chr = 'A'+n-1;
    for(int i = 0; i < n; i++) {
        for(char ch = chr-i; ch <= chr; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    print(n);

    return 0;
}