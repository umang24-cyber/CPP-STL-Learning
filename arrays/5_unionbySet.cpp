#include<bits/stdc++.h>
using namespace std;


vector<int> findUnion(int arr1[], int arr2[], int n, int m) {

    unordered_set<int> s;

    for(int i = 0; i < n; i++)
        s.insert(arr1[i]);

    for(int i = 0; i < m; i++)
        s.insert(arr2[i]);

    vector<int> Union(s.begin(), s.end());

    return Union;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

    vector<int> result = findUnion(arr1,arr2,n,m);
    for(auto val: result){
        cout<< val<< " ";
    }
    return 0;

}    