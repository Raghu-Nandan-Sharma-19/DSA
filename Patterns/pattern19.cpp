#include<bits/stdc++.h>
using namespace std;

void printUpper(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        for(int j = 1; j <= 2*i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printLower(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= i+1; j++) {
            cout << "*";
        }
        for(int j = 1; j <= (2*n-2)-(2*i); j++) {
            cout << " ";
        }
        for(int j = 1; j <= i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print(int n) {
    printUpper(n);
    printLower(n);
}

int main() {
    int n;
    cin >> n;

    print(n);

    return 0;
}