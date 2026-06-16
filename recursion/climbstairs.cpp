#include<bits/stdc++.h>
using namespace std;

int climbStairs(long long n){
    if(n<0){
        return 0;
    }

    if(n ==0){
        return 1; 
    }
    
    if(n==1){
        return 1;
    }

    int ans = climbStairs(n-1) + climbStairs(n-2);

    return ans;
}

int main(){
      int n ;
      cin >> n ;

      int ans = climbStairs(n);
      cout<<ans;
}