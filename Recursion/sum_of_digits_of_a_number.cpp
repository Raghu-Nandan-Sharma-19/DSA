#include<bits/stdc++.h>
using namespace std;

int addDigits(int num) {
    if(num < 10) {
        return num;
    }
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return addDigits(sum);
}

int main() {
    int num;
    cin >> num;

    cout << addDigits(num) << endl;

    return 0;
}