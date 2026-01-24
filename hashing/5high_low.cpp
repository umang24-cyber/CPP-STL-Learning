#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void highLow(int arr[], int n){
    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }

    int mx = INT_MIN;
    int mn = INT_MAX;
    int mxnum =0;
    int mnnum = 0;

    for(auto x : mp){

            if(x.second > mx){
                mx = x.second;
                mxnum = x.first;
            }

            if(x.second < mn){
                mn = x.second;
                mnnum = x.first;
            }
        }

        cout << "Number with maximum frequency: " << mxnum << endl;

        cout << "Number with minimum frequency: " << mnnum << endl;
    }
};

int main(){
    Solution obj;

    int arr[] = {10, 5, 10, 15, 5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    obj.highLow(arr, n);

    return 0;
}