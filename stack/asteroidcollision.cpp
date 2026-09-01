#include<bits/stdc++.h>
using namespace std;
// Time Complexity: O(N), since traversing all the asteroids takes O(N) time.

//Space Complexity: O(N), since in the worst case, all asteroids will be stored in the stack if there are no collisions, leading to a space requirement of O(N).
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        int n = asteroids.size();
        for(int i = 0; i<n; i++){
            if(asteroids[i]>0) st.push_back(asteroids[i]);
            else{
                while(!st.empty() && st.back() > 0 && 
                      st.back() < abs(asteroids[i])) {

                    st.pop_back();
            }
            if(!st.empty()&& st.back()== abs(asteroids[i])){
                st.pop_back();
            }
             else if(st.empty() || st.back() < 0){
                    
                    st.push_back(asteroids[i]);
                }
            }    
        }
        return st;
    }
};
int main(){

}