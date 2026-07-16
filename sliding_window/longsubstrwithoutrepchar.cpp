#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0;
        int ans = 0;
        for(int right=0;right<s.size();right++){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
          ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
int main(){
    Solution s;
    string str = "abcabcbb";
    int result = s.lengthOfLongestSubstring(str);
    
    cout << "Length of Longest Substring Without Repeating Characters: " << result << endl;
    
    return 0;
}