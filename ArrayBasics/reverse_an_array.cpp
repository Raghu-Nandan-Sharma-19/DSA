#include<bits/stdc++.h>
using namespace std;

void inputOfArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int size) {
    int left = 0, right = size-1;
    
    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    printArray(arr, size);
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    inputOfArray(arr, size);
    reverse(arr, size);

    return 0;
}