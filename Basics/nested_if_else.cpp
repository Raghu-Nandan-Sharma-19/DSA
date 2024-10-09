/*
You are given 3 integers a, b and c,
print which of these integers is the largest. If
two or more integers are equal and are the largest,
print any of them
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a >= b) {
        if(a >= c) {
            cout << "Largest is A" << endl;
        } else {
            cout << "Largest is C" << endl;
        }
    } else if(b >= c) {
        cout << "Largest is B" << endl;
    } else {
        cout << "Largest is C" << endl;
    }
    
    return 0;
}