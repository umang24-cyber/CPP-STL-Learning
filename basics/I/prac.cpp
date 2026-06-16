#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
      string defangIPaddr(string address){
            string ans ;
            for(char ch : address){
                  if (ch == '.')
                      ans.append("[.]");
                  else
                          ans.push_back(ch);
                  
            }
      }

};
int main(){
      Solution sol;
      string address = "hello.world";
      string defanged = sol.defangIPaddr(address);
      cout << "Defanged IP Address: " << defanged << endl;
      return 0;   
}      