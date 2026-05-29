#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
       int nthroot(int n , int m){
        int start = 1; int end = m;
        while(start<=end){
            int mid = start+ (end-start)/2;
            long long ans = 1;
            for(int i = 0; i<n; i++){
                ans *= mid;
                if(ans>m) break;
            }

            if(ans==m){return mid;}
            if(ans<m){start = mid +1 ;}
            else{end = mid -1;}
        }
        return -1;
       }
};

int main(){
    Solution obj;
    int result;
    result = obj.nthroot(3,27);
    cout<<result;
    return 0;
}
