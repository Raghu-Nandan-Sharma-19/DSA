#include<bits/stdc++.h>
using namespace std;
int main() {
    int bDate, num;
    string str1, str2;
    
    cin >> bDate >> num;
    cin.ignore();

    getline(cin, str1);
    getline(cin, str2);

    cout << bDate << endl << num << endl;
    cout << str1 << endl << str2 << endl;

    return 0;
}