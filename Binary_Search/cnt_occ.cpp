#include <bits/stdc++.h>
using namespace std;

int countOccurences(vector<int>& arr, int n, int x) {
    int first = -1, last = -1;
    int start = 0, end = n - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == x) {
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] < x) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if(first == -1) return 0; 

    start = 0;
    end = n - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == x) {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid] < x) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return last - first + 1;
}

int main() {
    vector<int> arr = {1,2,3,3,4,5};
    int n = arr.size();
    int x = 3;

    int res = countOccurences(arr, n, x);
    cout << res;
}
