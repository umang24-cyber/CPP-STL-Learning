#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int n = fruits.size();
        int left = 0;
        int ans = 0;
        for(int right = 0; right<n;right++){
            mp[fruits[right]]++;
            while(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0)
                   mp.erase(fruits[left]);
                   left++;
            }
        ans = max(ans, right-left+1);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> fruits = {1, 2, 1, 2, 3};
    int result = s.totalFruit(fruits);
    
    cout << "Total Fruits in Basket: " << result << endl;
    
    return 0;
}