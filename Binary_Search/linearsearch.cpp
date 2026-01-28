#include<bits/stdc++.h>
using namespace std;

bool SearchArray(int arr[], int size, int key){

    for(int i = 0; i<size ; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[] = {2, 4, 12, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    if(SearchArray(arr, size, key))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}