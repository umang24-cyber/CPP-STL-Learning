#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compInteger(int n)
    {

        if (n == 0)
            return 1;

        string binary = "";
        while (n > 0)
        {
            int rem = n % 2;
            binary = char(rem + '0') + binary;
            n /= 2;
        }

        for (int i = 0; i < binary.length(); i++)
        {
            if (binary[i] == '1')
                binary[i] = '0';
            else
                binary[i] = '1';
        }

        int ans = 0;
        for (int i = 0; i < binary.length(); i++)
        {
            ans = ans * 2 + (binary[i] - '0');
        }

        return ans;
    }
};
