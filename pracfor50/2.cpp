#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n = nums.size();
       unordered_set<int> st;
       for(int i : nums){
          if(st.count(i)){
              return true;
          }
          st.insert(i);
       }
       return false;
    }
};