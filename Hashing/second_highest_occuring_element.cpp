#include<bits/stdc++.h>
using namespace std;

int secondMostFrequentElement(vector<int>& nums) {
    int maxFreq = 0, secMaxFreq = 0;
    int maxEle = -1, secEle = -1;
    int n = nums.size();
    unordered_map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        mpp[nums[i]]++;
    }
        
    for(auto it : mpp) {
        int ele = it.first, freq = it.second;
        
        if(freq > maxFreq) {
            secMaxFreq = maxFreq;
            maxFreq = freq;
            secEle = maxEle;
            maxEle = ele;
        }
        else if(freq == maxFreq) {
            maxEle = min(maxEle, ele);
        }
        else if(freq > secMaxFreq) {
            secMaxFreq = freq;
            secEle = ele;
        }
        else if(freq == secMaxFreq) {
            secEle = min(secEle, ele);
        }
    }

    return secEle;
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

    cout << secondMostFrequentElement(nums) << endl;

    return 0;
}