#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
       int findRotations(vector<int>& arr){
        int start = 0;
        int end = arr.size()-1;
        
        while(start<end){
            int mid = start + (end-start)/2;

            if(arr[mid]>arr[end]){
                start = mid +1;
            }else{
                end = mid;
            }
        }
        return start;
       }
};

int main(){
    Solution sol;
    vector<int> arr = {4,5,6,7,0,1,2,3};

    int rotations = sol.findRotations(arr);
    cout<< rotations << endl;
    return 0;
}