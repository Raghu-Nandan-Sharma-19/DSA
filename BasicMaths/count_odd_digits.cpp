#include<bits/stdc++.h>
using namespace std;

int countOddDigits(int num) {
    int countOdd = 0;

    while(num > 0) {
        int lastDigit = num%10;
        if(lastDigit%2 == 1) countOdd++;
        num /= 10;
    }

    return countOdd;
}

int main() {
    int num;
    cin >> num;

    cout << countOddDigits(num) << endl;

    return 0;
}