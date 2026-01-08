#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to print Pattern 8
    void pattern8(int N) {
        // Outer loop for rows
        for (int i = 0; i < N; i++) {
            
            // Print leading spaces 
            for (int j = 0; j <N-i-1; j++) {
                cout << " ";
            }

            // Print stars 
            // Formula: total stars = (2*i + 1)
            for (int j = 0; j <  (2 * i + 1); j++) {
                cout << "*";
            }

            // Print trailing spaces 
            for (int j = 0; j < N-i-1; j++) {
                cout << " ";
            }

            // Move to next row
            cout << endl;
        }
    }
};

int main() {
    Solution sol;
    int N = 5;
    sol.pattern8(N);
    return 0;
}
