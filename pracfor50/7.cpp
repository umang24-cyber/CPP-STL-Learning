#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
      sort(nums.begin(),nums.end());
      int n = nums.size();
      int cnt = 0;
      int maxi = 1;
      for(int i = 0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        if(i>0 && nums[i]==nums[i-1]+1){
            cnt++;
        }
        else{
            cnt = 1;
        }
        maxi = max(maxi, cnt);
      }
      return maxi;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;
        for (int num : st) {
            if (!st.count(num - 1)) {
                int curr = num;
                int len = 1;
                while (st.count(curr + 1)) {
                    curr++;
                    len++;
                }
                longest = max(longest, len);
            }
        }
        return longest;
    }
};