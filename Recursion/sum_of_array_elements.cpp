#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> &nums, int left) {
    if(left >= nums.size()) {
        return 0;
    }
    return nums[left]+sum(nums, left+1);
}

int arraySum(vector<int> &nums) {
    return sum(nums, 0);
}

int main() {
    int size;
    cin >> size;
    vector<int> arr;

    for(int i = 0; i < size; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << arraySum(arr) << endl;

    return 0;
}