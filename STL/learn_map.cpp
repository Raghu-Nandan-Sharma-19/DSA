#include<bits/stdc++.h>
using namespace std;

void learnMap() {
    map<int, string> mpp;

    mpp[1] = "Raghu";
    mpp[2] = "Daksh";
    mpp[3] = "Jaskaran";
    mpp.insert({4, "Pankaj"});

    for(auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    auto it = mpp.find(1);
    cout << (*it).first << "->" << (*it).second << endl;
}

int main() {
    learnMap();
    return 0;
}