#include<bits/stdc++.h>
using namespace std;

int reverse(int num) {
    int reversedNum = 0;

    while(num > 0) {
        int lastDigit = num%10;
        reversedNum = (reversedNum*10)+lastDigit;
        num /= 10;
    }

    return reversedNum;
}

bool isPalindrome(int num) {
    int reversedNum = reverse(num);
    return (num == reversedNum);
}

int main() {
    int num;
    cin >> num;

    cout << isPalindrome(num) << endl;

    return 0;
}