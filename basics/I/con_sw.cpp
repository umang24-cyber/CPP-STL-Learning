#include <iostream>
using namespace std;

int main() {
    // Define two constant integers
    const int x = 10;
    const int y = 10;

    // Evaluate the sum of x and y using a switch statement
    switch (x + y) {
        case 15: // If the sum equals 15
            cout << "Result is 15." << endl;
            break; // Exit the switch block
        case 20: // If the sum equals 20
            cout << "Result is 20." << endl;
            break; // Exit the switch block
        default: // If no case matches
            cout << "No match found." << endl;
    }

    return 0; // End of program
}

