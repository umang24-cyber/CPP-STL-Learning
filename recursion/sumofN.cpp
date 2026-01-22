#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
       int sumofN( int n){
        if(n==1){
            return 1;
        }
        return n + sumofN(n-1);
       }
};
int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.sumofN(n);
    return 0;
}