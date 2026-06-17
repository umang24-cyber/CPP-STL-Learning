#include<bits/stdc++.h>
using namespace std;
// Doubly Linked List Implementation in C++
// deletion of head, tail, kth element and a given node in doubly linked list
class Node{
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* reverseDLL(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    while(curr!=nullptr){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node* convertarr2DLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head; 

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp; 
        prev = temp; 
    }
    return head;    
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";  
        head = head->next;
    }
}


int main(){
    vector<int> arr = {12, 5, 8, 7, 4};
    Node* head = convertarr2DLL(arr);
     cout << "Original List: ";
    print(head);
    head = reverseDLL(head);

    cout << "Reversed List: ";
    print(head);
    cout << endl;

    return 0;
}