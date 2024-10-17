#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &nums, int left, int right) {
    if(left >= right) {
        return;
    }
    swap(nums[left], nums[right]);
    reverse(nums, left + 1, right - 1);
}

vector<int> reverseArray(vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;
    reverse(nums, left, right);
    return nums;
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

    vector<int> ans = reverseArray(nums);

    for(auto i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}