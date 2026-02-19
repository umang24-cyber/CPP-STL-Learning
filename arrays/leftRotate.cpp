#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void leftRotateByOne(vector<int> &nums)
    {
        int n = nums.size();
        int first = nums[0];

        for (int i = 0; i < n - 1; i++)
        {
            nums[i] = nums[i + 1];
        }

        nums[n - 1] = first;
    }
};

