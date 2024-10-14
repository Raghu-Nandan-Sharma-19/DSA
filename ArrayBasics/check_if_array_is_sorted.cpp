#include<bits/stdc++.h>
using namespace std;

void inputOfArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

bool isSorted(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    inputOfArray(arr, size);
    cout << isSorted(arr, size) << endl;

    return 0;
}