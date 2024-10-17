#include<bits/stdc++.h>
using namespace std;

bool prime(int num, int x) {
    if(x > sqrt(num)) {
        return true;
    }
    if(num%x == 0) {
        return false;
    }
    return prime(num, x + 1);
}

bool checkPrime(int num) {
    if(num <= 1) {
        return false;
    }
    return prime(num, 2);
}

int main() {
    int num;
    cin >> num;

    cout << checkPrime(num) << endl;

    return 0;
}