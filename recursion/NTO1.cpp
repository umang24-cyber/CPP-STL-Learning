#include<bits/stdc++.h>
using namespace std; 

class Solution{
public:
       void printNums(int current , int n){
        if (current == n){
            return;
        }
        printNums( current+1 , n);
        cout<<current<<"\n";
        
       }
};

int main(){
    Solution obj;
    int n = 5;
    obj.printNums(1, n);
    cout<<"\n";
    return 0;   
}