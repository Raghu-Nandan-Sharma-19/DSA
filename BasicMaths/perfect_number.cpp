#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int num) {
    int sum = 1;

    for(int i = 2; i <= sqrt(num); i++) {
        if(num%i == 0) {
            sum += i;
            if(i != (num/i)) sum += (num/i);
        }
    }

    return (sum == num);
}

int main() {
    int num;
    cin >> num;

    cout << isPerfect(num) << endl;

    return 0;
}