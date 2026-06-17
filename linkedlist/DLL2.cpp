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

Node* convertArr2DLL(vector<int> arr) {
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

Node* insertatHead(Node* head){
    Node* newHead = new Node(15, head, nullptr);
    head->back = newHead;
    return newHead;
}
Node* insertatTail(Node* head){
    Node* newTail = new Node(20, nullptr, nullptr);
    Node* tail = head;
    while(tail->next!=nullptr){
        tail = tail->next;
    }
    tail->next = newTail;
    newTail->back = tail;
    return head;
}

Node* insertatK(Node* head, int k){
    Node* newNode = new Node(25, nullptr, nullptr);
    Node* temp = head;
    int cnt = 0;
    while(temp!=nullptr && cnt<k-1){
        temp = temp->next;
        cnt++;
    }
    Node* front = temp->next;
    temp->next = newNode;
    newNode->back = temp;
    newNode->next = front;
    front->back = newNode;
    return head;
}

void insertatNode(Node* temp){
    Node* newNode = new Node(30, nullptr, nullptr);
    Node* prev = temp->back;
    prev->next = newNode;
    newNode->back = prev;
    newNode->next = temp;
    temp->back = newNode;
}

int main(){
    vector<int> arr = {12, 5, 8, 7, 4};
    Node* head = convertArr2DLL(arr);
    cout << "Original List: ";
    print(head);
    cout << endl;
    head = insertatHead(head);
    cout << "After Insertion at Head: ";
    print(head);
    cout << endl;
    head = insertatTail(head);
    cout << "After Insertion at Tail: ";    
    print(head);
    cout << endl;
    head = insertatK(head, 3);
    cout << "After Insertion at Kth Position: ";     
    print(head);    
    cout<<endl;
    Node* temp = head->next->next;
    insertatNode(temp);
    cout << "After Insertion at Given Node: ";      
    print(head);
    cout<<endl;
    return 0;
}