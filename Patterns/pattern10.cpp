#include<bits/stdc++.h>
using namespace std;

void printTriangle(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printReverseTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print(int n) {
    printTriangle(n);
    printReverseTriangle(n-1);
}

int main() {
    int n;
    cin >> n;

    print(n);

    return 0;
}