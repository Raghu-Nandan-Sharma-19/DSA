#include<bits/stdc++.h>
using namespace std;

int sumHighestAndLowestFrequency(vector<int> &nums) {
    int n = nums.size();
    int maxFreq = 0, minFreq = INT_MAX;
    unordered_map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        mpp[nums[i]]++;
    }

    for(auto it : mpp) {
        int freq = it.second;

        maxFreq = max(maxFreq, freq);
        minFreq = min(minFreq, freq);
    }

    return maxFreq+minFreq;
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

    cout << sumHighestAndLowestFrequency(nums) << endl;

    return 0;
}