#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insertion_sort(vector<int>& nums) {
        int n = nums.size();

        for (int i = 1; i < n; i++) {   // start from 1
            int key = nums[i];
            int j = i - 1;

            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }
    }
};

int main() {
    Solution obj;
    vector<int> nums = {8, 3, 5, 7};

    cout << "Before Using Insertion Sort:\n"; 
    for (int num : nums) cout << num << " ";
    cout << endl;

    obj.insertion_sort(nums);   
    cout << "After Using Insertion Sort:\n";
    for (int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}
