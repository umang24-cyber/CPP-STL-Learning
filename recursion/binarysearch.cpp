#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int s , int e , int k){
      
       if(s>e){
        return -1;
       }

       int mid = s  + (e-s)/2;

       if(arr[mid]==k){
        return mid;
       }

       if(arr[mid]<k){
           return binarySearch(arr, mid +1 , e , k);
       }
       else{
        return binarySearch(arr, s , mid-1 , k);
       }
}

int main(){
    int arr[5] = {2,4,5,6,7};
    int size = 5;
    int key = 5;

    int index = binarySearch(arr, 0, size-1, key);
    if(index != -1){
        cout<<"element found"<<endl;
        cout<<index<<endl; 
    }
    else{
        cout<<"Element not found"<<endl;
    }
}