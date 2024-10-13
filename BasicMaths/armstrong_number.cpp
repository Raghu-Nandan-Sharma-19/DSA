#include<bits/stdc++.h>
using namespace std;

int countDigit(int num) {
    int count = log10(num) + 1;
    return count;
}

bool isArmstrong(int n) {
    // variable to store sum
    int sum = 0;
    // variable to store count of digits
    int countDigits = countDigit(n);
    // duplicate of the original number
    int duplicateNum = n;
    // looping till n is greater than 0
    while(n > 0) {
        // variable to store current digit
        int currentDigit = n%10;
        // adding currentDigit ^ countDigits to sum
        sum += pow(currentDigit, countDigits);
        // removing last digit from the number
        n /= 10;
    }
    // returning true if sum = duplicate
    return (duplicateNum == sum);
}

int main() {
    int num;
    cin >> num;

    cout << isArmstrong(num) << endl;

    return 0;
}