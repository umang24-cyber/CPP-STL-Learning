#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        reverse(arr.begin(), arr.end());
    }
};


int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    Solution obj;
    obj.reverseArray(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}