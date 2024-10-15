#include<bits/stdc++.h>
using namespace std;

int mostFrequentElement(vector<int> &nums) {
    int n = nums.size();
    int maxFreq = 0, maxEle;
    unordered_map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        mpp[nums[i]]++;
    }

    for(auto it : mpp) {
        int ele = it.first;
        int freq = it.second;

        if(freq > maxFreq) {
            maxFreq = freq;
            maxEle = ele;
        }
        else if(freq == maxFreq) {
            maxEle = min(maxEle, ele);
        }
    }

    return maxEle;
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

    cout << mostFrequentElement(nums) << endl;

    return 0;
}