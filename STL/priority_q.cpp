#include<bits/stdc++.h>
using namespace std;
// GENERALLY PRIORITY DEKHDE HAI KEHRA VDA NO. HAI UNTIL CHANGE KITA JAVE
class Solution{
public:
   void explainPQ(){
    priority_queue<int> pq;
       pq.push(5);
       pq.push(2);
       pq.push(8);
       pq.emplace(10);// {10,8,5,2}

       cout<<pq.top()<<endl;
       pq.pop();
       cout<<pq.top()<<endl;
 
    //MINIMUM HEAP
       priority_queue<int, vector<int>, greater<int>> rpq;
       rpq.push(5);
       rpq.push(2);
       rpq.push(8);
       rpq.emplace(10); // {2,5,8,10}

       cout<<rpq.top()<<endl;
       rpq.pop();
       cout<<rpq.top()<<endl;
 
       
        
   }
};

int main(){
    Solution obj;
    obj.explainPQ();
}