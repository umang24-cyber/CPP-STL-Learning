#include<bits/stdc++.h>
using namespace std;

// LIST HAS ALL SAME FUNC AS VECTOR BS KUCH ADD ONS HAI

class Solution{
public:
    void explainList(){
        list<int> ls;
        ls.push_back(1);
        ls.emplace_back(2);
        ls.push_front(1);
        ls.emplace_front(3);
          for (int x : ls) {
        cout << x << " ";
    }
    }
};


int main(){
    Solution obj;
    obj.explainList();
}