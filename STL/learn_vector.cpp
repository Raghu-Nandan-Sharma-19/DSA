#include<bits/stdc++.h>
using namespace std;

void learnVector() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.emplace_back(0);

    cout << vec.size() << endl;

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // iterator
    vector<int>::iterator beginItr = vec.begin();
    auto endItr = vec.end();

    for(auto i = beginItr; i < endItr; i++) {
        cout << *i << " ";
    }
    cout << endl;

    for(auto i:vec) {
        cout << i << " ";
    }
    cout << endl;

    // reverse iterator
    auto reverseBegin = vec.rbegin();
    auto reverseEnd = vec.rend();

    for(auto i = reverseBegin; i < reverseEnd; i++) {
        cout << *i << " ";
    }
    cout << endl;

    vector<int> vec2 = {7, 8};
    for(auto i:vec2) {
        cout << i << " ";
    }

    vector<int> dupVec(vec);
    for(auto i:dupVec) {
        cout << i << " ";
    }
    cout << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    dupVec.pop_back();
    for(auto i:dupVec) {
        cout << i << " ";
    } 
    cout << endl;

    dupVec.erase(dupVec.begin());
    for(auto i:dupVec) {
        cout << i << " ";
    }
    cout << endl;

    dupVec.clear();

    cout << vec.at(2) << endl;

    vector<int> vec3 = {7, 8};
    vector<int> vec4 = {5, 6};

    swap(vec3, vec4);

    for(auto i:vec3) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vec5 = {7, 8, 8, 6, 7};
    vec5.insert(vec5.begin(), 4);

    for(auto i:vec5) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    learnVector();
    return 0;
}