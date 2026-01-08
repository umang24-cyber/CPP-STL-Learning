#include <bits/stdc++.h>
using namespace std;

// Function to print the pattern of alphabets
void pattern14(int N) {
    // Outer loop for the number of rows
    for (int i = 0; i < N; i++) {
        
        // Inner loop to print alphabets from A to A + i
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";  // Print the character followed by a space
        }

        // Move to the next line after printing the current row
        cout << endl;
    }
}

int main() {
    int N = 5;  // Set the size of the pattern (5 rows)
    pattern14(N);  // Call the function to print the pattern
    return 0;
}
