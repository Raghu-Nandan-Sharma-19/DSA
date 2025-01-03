#include<bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;

    if(age >= 18) {
        cout << "Adult" << endl;
    }
    else {
        cout << "Not an adult" << endl;
    }

    return 0;
}