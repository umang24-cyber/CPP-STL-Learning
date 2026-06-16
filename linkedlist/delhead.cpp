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
void print(Node* head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* delHead(Node* head){
    if(head == nullptr) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertarr2LL(arr);
    head = delHead(head);
    print(head);
}

