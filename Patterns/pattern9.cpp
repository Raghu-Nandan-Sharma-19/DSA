#include<bits/stdc++.h>
using namespace std;

void printTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        // space
        for(int j = 1; j <= (n - i); j++) {
            cout << " ";
        }

        // stars
        for(int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }

        // space
        for(int j = 1; j <= (n - i); j++) {
            cout << " ";
        }

        cout << endl;
    }
}

void printInverseTriangle(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        for(int j = 0; j < 2*n-(2*i+1); j++) {
            cout << "*";
        }
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }   
}

void print(int n) {
    printTriangle(n);
    printInverseTriangle(n);
}

int main() {
    int n;
    cin >> n;

    print(n);

    return 0;
}