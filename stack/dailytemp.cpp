#include<bits/stdc++.h>
using namespace std;    

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       stack<int> st;
       int n2 =temperatures.size();
       vector<int> answer (n2,0);
       for(int i =n2-1;i>=0;i-- ){
           while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
            st.pop();
           }
           if(st.empty()){
            answer[i] = 0;
           }
           else{
            answer[i] = st.top() - i;
           }
           st.push(i);
       }
       return answer;
    }
};

int main(){
    Solution s;
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = s.dailyTemperatures(temperatures);
    
    cout << "Daily Temperatures: ";
    for (int temp : result) {
        cout << temp << " ";
    }
    cout << endl;
    
    return 0;
}