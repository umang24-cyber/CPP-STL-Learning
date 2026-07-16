#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        double sum = 0;
        double ans = INT_MIN;
        for(int right = 0; right<nums.size();right++){
            sum += nums[right];
            if(right-left+1==k){
                ans = max(ans,sum);
                sum -= nums[left];
                left++;
            }
        }
        return ans/k;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double result = s.findMaxAverage(nums, k);
    
    cout << "Maximum Average Subarray of Length " << k << ": " << result << endl;
    
    return 0;
}