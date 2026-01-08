#include<bits/stdc++.h>
using namespace std;
// ISME PEHLE WALA LIST KE LAST ME AATA
class Solution{
public:
   void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5); //{5.3.3.2.1}
    cout<<st.top();
    st.pop();
    cout<<st.top();
    cout<<st.size();
    cout<<st.empty();

}
};

int main(){
    Solution obj;
    obj.explainStack(); 
}