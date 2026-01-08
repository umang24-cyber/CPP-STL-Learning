#include<bits/stdc++.h>
using namespace std;

void explainpair() {
    pair<int, int> p = {1,3};
    cout<<p.first;
    pair<int, pair<int,int>> x = {1,{3,4}};
    cout<<x.first<<" "<< x.second.second;
    pair<int, int>arr[] = {{1,2}, {2,3},{3,4}};
    cout<<arr[1].second;
};

int main(){
    int z;
    explainpair();
    return 0;
}
