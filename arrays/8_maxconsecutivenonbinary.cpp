#include<bits/stdc++.h>
using namespace std;
//NON BINARY NO.S LYI
int maxConsecutiveEqual(vector<int>& nums) {
    if(nums.empty()) return 0;

    int maxCount = 1;
    int count = 1;

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[i-1]) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 1;
        }
    }

    return maxCount;
}
