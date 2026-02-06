#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
       bool sortedArray(vector<int>& nums){
        int n = nums.size();
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                cnt++;
            }
        }
        return cnt<=1;
       }
};

int main(){
     vector<int> arr = {1,2,3,6,5};
     Solution obj;
     bool ans = obj.sortedArray(arr);
     cout<<ans;

}