#include<bits/stdc++.h>
using namespace std;

int reverseNum(int num) {
    int reversedNum = 0;
    while(num > 0) {
        int lastDigit = num%10;
        num /= 10;
        reversedNum = (reversedNum*10)+lastDigit;
    }
    return reversedNum;
}

int main() {
    int num;
    cin >> num;
    
    cout << reverseNum(num) << endl;

    return 0;
}