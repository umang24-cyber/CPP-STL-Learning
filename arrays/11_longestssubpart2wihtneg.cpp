#include <bits/stdc++.h>
using namespace std;
// optimal approach for longest subarray with sum k(with zero and negative numbers)
int longestSubarray(vector<int>& nums, int k) {
    unordered_map<long long, int> mp;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if(sum == k) {
            maxLen = max(maxLen,i + 1);
        }
        long long rem = sum - k;
        if(mp.find(rem) != mp.end()) {
            int len = i - mp[rem];
            maxLen = max(maxLen, len);
        }
        if(mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }
    return maxLen;
}

int main() {
    vector<int> nums = {1, -1, 5, -2, 3};
    int k = 3;

    cout << longestSubarray(nums, k);

    return 0;
}
