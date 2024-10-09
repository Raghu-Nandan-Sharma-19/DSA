/*
Given the marks of a student, tell us the grade student is 
getting following the below rules

Grade A (>= 90)
Grade B (>= 70 and < 90)
Grade C (>= 50 and < 70)
Grade D (>= 35 and < 50)
Fail (< 35)

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int marks;
    cin >> marks;

    if(marks >= 90) {
        cout << "A" << endl;
    } else if(marks >= 70) {
        cout << "B" << endl;
    } else if(marks >= 50) {
        cout << "C" << endl;
    } else if(marks >= 35) {
        cout << "D" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}