#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int n = s.size();
        int ans =0;
        int cnt =0;
        for(int i =0; i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                    cnt =0;
                }
                else{
                    cnt = i-st.top();
                    ans = max(ans,cnt);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    string str = "(()())";
    int result = s.longestValidParentheses(str);
    
    cout << "Length of Longest Valid Parentheses: " << result << endl;
    
    return 0;
}