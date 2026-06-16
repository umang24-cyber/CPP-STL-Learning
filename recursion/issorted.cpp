#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){

    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingpart = isSorted( arr +1 , size-1);
        return remainingpart;
    }
}

int main(){
    int arr[4] = {1,3,2,6};
    int size = 4;
    
    bool ans = isSorted(arr, size);
    if(ans){
        cout<<"Array is Sorted"<<endl;
    }
    else{cout<<"Array is not Sorted";}

}