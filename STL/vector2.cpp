#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
   void explainVector(){
    vector<int> v;
    v.emplace_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    v.emplace_back(40);
    v.emplace_back(50);
    v.insert(v.begin(), 2,300);  // (   , no. of , te jo krna)
    v.erase(v.begin()+2,v.begin()+3);  // (v.begin()-> closed[start, v.begin()-> end)open )
    cout<<v[0]<<v[1]<<v[2]<<v[3];
    /* v.size()-> size dsda
       v.pop_back()-> last element hta dinda
       v1.swap(v2)-> v1 te v2 interchange krdu
       v.clear() -> erases entire vector
       v.empty()-> je empty huga ta 1 du nhi ta 0  nal cout jrur lgu    */ 
   }
};
int main(){
    Solution obj;
    obj.explainVector();
    return 0;
}