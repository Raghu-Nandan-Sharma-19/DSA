#include<bits/stdc++.h>
using namespace std;

void learnPairs() {
    pair<int, int> pr1 = {2, 8};
    cout << pr1.first << " " << pr1.second << endl;

    pair<int, char> pr2 = make_pair(2, 'b');
    cout << pr2.first << " " << pr2.second << endl;

    pair<pair<int, char>, int> pr3 = {{4, 'h'}, 8};
    cout << pr3.first.second << endl;
}

int main() {
    learnPairs();
    return 0;
}