#include<bits/stdc++.h>
using namespace std;

int factorial(int num) {
    long ans = 1;

    for(int i = 1; i <= num; i++) {
        ans *= i;
    }

    return ans;
}

int main() {
    int num;
    cin >> num;

    cout << factorial(num) << endl;

    return 0;
}