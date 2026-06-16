#include<bits/stdc++.h>
using namespace std;

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

Node* deleteHead(Node* head){
    if(head==nullptr||head->next==nullptr){
        return nullptr;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

Node* deleteTail(Node* head){
    if(head==nullptr||head->next==nullptr){
        return nullptr;
    }
    Node* tail = head;
    while(tail->next!=nullptr){
        tail = tail->next;
    }
    Node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node* removeKthelement(Node* head, int k){
    if(head==nullptr){
        return nullptr;
    }
    int cnt = 0;
    Node* kNode = head;
    while(kNode!=nullptr&&cnt<k){
        kNode = kNode->next;
        cnt++;
    }
    Node* prev = kNode->back;
    Node* front = kNode->next;
    if(prev==nullptr && front == nullptr){
        return nullptr;
    }
    else if(prev==nullptr){
        front->back = nullptr;
        head = front;
    }
    else if(front==nullptr){
        prev->next = nullptr;
    }
    else{
        prev->next = front;
        front->back = prev;
    }
    kNode->next = nullptr;
    kNode->back = nullptr;
    delete kNode;
    return head;
} 
int main(){
    vector<int> arr = {12, 5, 8, 7, 4};
    Node* head = convertArr2DLL(arr);
    head = removeKthelement(head, 2);
    cout << "Original List: ";
    print(head);
    cout << endl;

    head = deleteHead(head);

    cout << "After Deletion of Head: ";
    print(head);
    cout << endl;

    return 0;
}   