#include<bits/stdc++.h>
using namespace std;

bool sort(vector<int> &nums, int left, int right) {
    if(right >= nums.size()) {
        return true;
    }
    if(nums[left] > nums[right]) {
        return false;
    }
    return sort(nums, left + 1, right + 1);
}

bool isSorted(vector<int> &nums) {
    if(nums.size() <= 1) {
        return true;
    }
    return sort(nums, 0, 1);
}

int main() {
    int size;
    cin >> size;
    vector<int> nums;

    for(int i = 0; i < size; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << isSorted(nums) << endl;

    return 0;
}