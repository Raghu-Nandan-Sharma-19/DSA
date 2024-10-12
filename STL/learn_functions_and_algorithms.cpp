#include<bits/stdc++.h>
using namespace std;

void learnSort() {
    int arr[5] = {6, 2, 1, 7, 8};
    sort(arr, arr + 5);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> vec = {5, 4, 3, 2, 1};
    sort(vec.begin(), vec.end());
    for(auto it : vec) {
        cout << it << " ";
    }
    cout << endl;
}

void learnAcculmulate() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << accumulate(arr, arr+5, 0) << endl;
}

void learnCount() {
    int arr[5] = {6, 2, 1, 1, 0};
    int num = 1;
    cout << count(arr, arr+5, num) << endl;
}

void learnFind() {
    int arr[5] = {6, 2, 1, 1, 0};
    auto it = find(arr, arr+5, 1);
    cout << *it << endl;
}

void learnNextPermutation() {
    string str = "abc";

    do {
        cout << str << endl;
    } while(next_permutation(str.begin(), str.end()));
}

void learnPrevPermutation() {
    string str = "cba";

    do {
        cout << str << endl;
    } while(prev_permutation(str.begin(), str.end()));
}

void learnMaxElement() {
    int arr[] = {7, 6, 5, 10, 9};
    auto it = max_element(arr, arr+5);
    cout << *it << endl;
}

void learnMinElement() {
    int arr[] = {7, 6, 4, 10, 9};
    auto it = *min_element(arr, arr+5);
    cout << it << endl;
}

void learnReverse() {
    int arr[] = {7, 6, 4, 10, 9};
    reverse(arr, arr+5);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void learnPow() {
    cout << pow(2, 9) << endl;
}

bool internalComparator(pair<int, int> el1, pair<int, int> el2) {
    if(el1.second > el2.second) return true;
    if(el1.second < el2.second) return false;
    if(el1.first < el2.first) return true;
    return false;
}

void learnComparator() {
    pair<int, int> arr[] = {{1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9}};

    // Sort according to the second element

    sort(arr, arr+5, internalComparator);
    for(int i = 0; i < 5; i++) {
        cout << "{" << arr[i].first << "," << arr[i].second << "}" << " ";
    }
    cout << endl;
}

int main() {
    learnSort();
    learnAcculmulate();
    learnCount();
    learnFind();
    learnNextPermutation();
    learnPrevPermutation();
    learnMaxElement();
    learnMinElement();
    learnReverse();
    learnPow();
    learnComparator();

    return 0;
}