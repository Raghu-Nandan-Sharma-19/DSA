#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if(num == 1) return false;

    for(int i = 2; i*i <= num; i++) {
        if(num%i == 0) return false;
    }

    return true;
}

int countPrime(int num) {
    int cnt = 0;
    for(int i = 2; i <= num; i++) {
        if(isPrime(i)) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int num;
    cin >> num;

    cout << countPrime(num) << endl;

    return 0;
}