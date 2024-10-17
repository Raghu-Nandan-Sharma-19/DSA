#include<bits/stdc++.h>
using namespace std;

int fibonacciNumber(int num) {
    if(num == 0) return 0;
    if(num == 1) return 1;

    return fibonacciNumber(num - 1) + fibonacciNumber(num - 2);
}

int main() {
    int num;
    cin >> num;

    cout << fibonacciNumber(num) << endl;

    return 0;
}