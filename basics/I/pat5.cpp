#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to print Pattern 5
    void pattern5(int N) {
        // Outer loop for rows
        for (int i = 0; i < N; i++) {
            // Inner loop for columns
            // Number of stars decreases with each row
            for (int j = N; j > i; j--) {
                cout <<N-j+1;
            }
            // Move to next line
            cout << endl;
        }
    }
};

int main() {
    // Create object of Solution class
    Solution sol;

    // Define size of pattern
    int N = 5;

    // Call pattern function
    sol.pattern5(N);

    return 0;
}
