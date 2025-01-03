#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a >= b) {
        if(a >= c) {
            cout << "Largest is A" << endl;
        }
        else {
            cout << "Largest is C" << endl;
        }
    }
    else if(b >= c) {
        cout << "Largest is B" << endl;
    }
    else {
        cout << "Largest is C" << endl;
    }
    
    return 0;
}