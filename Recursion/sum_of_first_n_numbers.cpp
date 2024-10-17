#include<bits/stdc++.h>
using namespace std;

int sumOfNNumbers(int n) {
    if(n < 0) {
        return 0;
    }
    return n+sumOfNNumbers(n-1);
}

int main() {
    int n;
    cin >> n;

    cout << sumOfNNumbers(n) << endl;

    return 0;
}