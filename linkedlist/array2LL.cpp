#include<bits/stdc++.h>
using namespace std;    

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};

Node* convertarr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);  
    Node* mover = head;
    for(int i = 1; i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;  
    }
    return head;
}
int LengthofLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int checkPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertarr2LL(arr);
    cout<<endl;
    cout<< LengthofLL(head)<<endl;
    cout<< checkPresent(head , 4)<<endl;
    return 0;

}