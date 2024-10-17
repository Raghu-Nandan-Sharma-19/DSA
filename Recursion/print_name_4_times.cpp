#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void printName() {
    if(cnt == 4) {
        return;
    }
    cout << "Striver" << endl;
    cnt++;
    printName();
}

int main() {
    printName();
    return 0;
}