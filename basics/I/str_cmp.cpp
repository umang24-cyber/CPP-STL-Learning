#include<iostream>
using namespace std;

class Solution{
public:
   bool comparestrings(string s1, string s2){
    return s1==s2;
   }
};

int main(){
    Solution obj;

    string s1;
    cin>> s1;

    string s2;
    cin>> s2;

    if(obj.comparestrings(s1,s2)){
        cout<<"strings are equal";
    }else{
        cout<<"They are not equal";
    }
    return 0;
}