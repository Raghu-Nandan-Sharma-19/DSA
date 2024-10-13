#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int num) {
    vector<int> ans;

    for(int i = 1; i*i <= num; i++) {
        if(num%i == 0) ans.push_back(i);
        if(i != num/i) ans.push_back(num/i);
    }

    sort(ans.begin(), ans.end());

    return ans;
}

int main() {
    int num;
    cin >> num;

    vector<int> ans = divisors(num);
    for(auto it : ans) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}