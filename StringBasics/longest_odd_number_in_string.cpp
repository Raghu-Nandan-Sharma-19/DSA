#include<bits/stdc++.h>
using namespace std;

string largeOddNum(string &str) {
    int j = -1, n = str.size();

    for(int i = n-1; i >= 0; i--) {
        if((str[i]-'0')%2 == 1) {
            j = i;
            break;
        }
    }

    if(j == -1) return " ";
    
    int i = 0;
    while(i < j && str[i] == '0') {
        i++;
    }

    return str.substr(i, j-i+1);
}

int main() {
    string str;
    getline(cin, str);

    cout << largeOddNum(str) << endl;

    return 0;
}