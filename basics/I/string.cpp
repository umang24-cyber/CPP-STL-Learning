#include <bits/stdc++.h>
using namespace std;

// Class containing the method to find string length
class Solution {
public:
    // Function to return length of a string
    int findlength(string s) {
        // Return length using built-in function
        return s.length();
    }
};

// Driver code
int main() {
    // Create object of Solution class
    Solution sai; //name dene a solution nu call krke 
    // Input string
    string s = "Hello World";
    // Call function and print result
    cout << sai.findlength(s) << endl;
    return 0;
}
