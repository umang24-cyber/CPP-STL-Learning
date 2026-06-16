#include<bits/stdc++.h>
using namespace std;

class Solution{
private:
        void solve(string str, string& output ,int index , vector<string> &ans){
              if (index >= str.size()){
                  if(output.length() > 0){
                    ans.push_back(output);
                  }
                    return;
              }
              //exclude
              solve(str, output, index + 1, ans);
              //include
              output.push_back(str[index]);
              solve(str, output, index + 1, ans);
              output.pop_back();
        }
public:
       vector<string> subseq(string str){
             vector<string> ans;
             string output;
             int index = 0;
             solve(str, output, index, ans);
             return ans;
       }
        

};
int main(){
        Solution sol;
        string str = "abc";
        vector<string> result = sol.subseq(str);
        cout << "Subsequences of " << str << " are:" << endl;
        for (const string& subsequence : result) {
                cout << subsequence << endl;
        }
        return 0;
}