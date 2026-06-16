#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern(int N) {
        for (int i = 0; i < N; i++) {
            for (int s = 0; s < N - i - 1; s++) {
                cout << " ";
            }

            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        for (int i = N -2; i >= 0; i--) {
            for (int s = 0; s < N - i - 1; s++) {
                cout << " ";
            }
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    Solution sol;
    int N = 4;
    sol.pattern(N);
    return 0;
}