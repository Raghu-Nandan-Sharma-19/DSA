#include<bits/stdc++.h>
using namespace std;

void print() {
    cout << "Print function called" << endl;
}

int sumOfTwoNumbers(int a, int b) {
    return (a+b);
}

int main() {
    int a, b;
    cin >> a >> b;

    // function calls
    print();
    int sum = sumOfTwoNumbers(a, b);
    cout << sum << endl;

    return 0;
}