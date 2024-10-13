#include<bits/stdc++.h>
using namespace std;

int largestDigit(int num) {
    int largest = 0;

    while(num > 0) {
        int currentDigit = num%10;
        if(currentDigit > largest) largest = currentDigit;
        num /= 10;
    }
    
    return largest;
}

int main() {
    int num;
    cin >> num;

    cout << largestDigit(num) << endl;

    return 0;
}