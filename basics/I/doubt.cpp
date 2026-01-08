#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int* arr[n];      // array of pointers
    int sizes[n];     // to store sizes of each array

    // Read the variable-length arrays
    for (int i = 0; i < n; i++) {
        cin >> sizes[i];
        arr[i] = new int[sizes[i]];

        for (int j = 0; j < sizes[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Process queries
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }

    return 0;
}
