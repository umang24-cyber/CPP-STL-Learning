#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
       void countFreq(int arr[], int n){
        unordered_map<int,int> map; // unordered map to store values

        for(int i = 0; i<n; i++){
           map[arr[i]]++; // count hojayengi
        }

        for(auto x: map){
            cout<<x.first<<" "<<x.second<<endl; //first -> number , second -> ohdi freq dinda
        }

       }
};  

int main(){
    Solution obj;
    int arr[] = {10,5,10,15,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    obj.countFreq(arr , n);
    return 0;


}