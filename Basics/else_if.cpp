// Given an integer age
// if age >= 18, print "adult"
// if age < 18 and age >= 10, print "teen"
// if age < 10, print "child"

#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cin >> age;

    if(age >= 18) {
        cout << "Adult" << endl;
    } else if(age < 18 && age >= 10) {
        cout << "Teen" << endl;
    } else {
        cout << "Child" << endl;
    }
    
    return 0;
}