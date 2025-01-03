#include<bits/stdc++.h>
using namespace std;

int main() {
    // short --> 2 bytes
    short short_num = 32767;
    cout << short_num << endl;

    // int --> 2 or 4 bytes
    int int_num = 2147483647;
    cout << int_num << endl;

    // float --> upto 5-7 decimal places
    float float_num = 1.12345;
    cout << float_num << endl;

    // double --> upto 15 decimal places
    double double_num = 1.123456789123456;
    cout << double_num << endl;

    // char --> all 256 characters
    char ch = 'c';
    cout << ch << endl;

    // bool --> true or false
    bool bool_var = true;
    cout << bool_var << endl;

    // long --> 4 or 8 bytes
    long long_num = 2147483647123;
    cout << long_num << endl;

    // long long --> 8 bytes
    long long long_long_num = 9223372036854775807;
    cout << long_long_num << endl;

    return 0;
}