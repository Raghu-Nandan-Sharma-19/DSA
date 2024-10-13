#include<bits/stdc++.h>
using namespace std;

// int countDigits(int num) {
//     if(num == 0) return 1;
//     int cnt = 0;
//     while(num > 0) {
//         num /= 10;
//         cnt++;
//     }
//     return cnt;
// }

// second solution
int countDigits(int num) {
    if(num == 0) return 1;
    int count = log10(num)+1;
    return count;
}

int main() {
    int num;
    cin >> num;
    
    cout << countDigits(num) << endl;

    return 0;
}