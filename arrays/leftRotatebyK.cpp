#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void leftRotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;

        while (k--)
        {
            int first = nums[0];
            for (int i = 0; i < n - 1; i++)
                nums[i] = nums[i + 1];
            nums[n - 1] = first;
        }
    }
};
