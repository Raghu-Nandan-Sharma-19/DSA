// Given an age, print "Adult" if age >= 18, or print "Teen"
#include<bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;

    if(age >= 18) {
        cout << "Adult" << endl;
    } else {
        cout << "Teen" << endl;
    }

    return 0;
}