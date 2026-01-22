#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;


    int digits = 0;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {   // digit^digits
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
