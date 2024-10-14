#include<bits/stdc++.h>
using namespace std;

void inputOfArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int sumOfArrayElements(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    inputOfArray(arr, size);
    cout << sumOfArrayElements(arr, size) << endl;

    return 0;
}