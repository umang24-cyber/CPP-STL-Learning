#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
       int facofN( int n){
        if(n==0 || n ==1){
            return 1;
        }
        return n*facofN(n-1);
       }
};
int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.facofN(n);
    return 0;
}