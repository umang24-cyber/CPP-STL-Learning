#include<bits/stdc++.h>
using namespace std;
// time comp 0(n) , space - 0(n)----
class Solution{
public: 
       void printName(string name, int count , int N){
        if(count == N){
            return;
        }
        cout<<name<<"\n";
        printName(name , count+1, N);
       }
};

int main(){
    Solution obj;
    int N = 5;
    string name = "Umang";

    obj.printName(name, 0 , N);

    return 0;
}
