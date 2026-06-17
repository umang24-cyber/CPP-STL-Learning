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
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";  
        head = head->next;
    }
}

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

Node* add2numbers(Node* head1, Node* head2){
    Node* dummy = new Node(0);
    Node* tail = dummy;
    int carry = 0;

    while(head1!=nullptr || head2!=nullptr || carry){
        int sum = carry;
        if(head1!=nullptr){
            sum+=head1->data;
            head1 = head1->next;
        }
        if(head2!=nullptr){
            sum+=head2->data;
            head2 = head2->next;
        }
        carry = sum/10;
        Node* newNode = new Node(sum%10);
        tail->next = newNode;
        tail = newNode;
    }
    return dummy->next;
}

int main(){
    vector<int> arr1 = {2, 4, 3};
    vector<int> arr2 = {5, 6, 4};
    Node* head1 = convertArr2DLL(arr1);
    Node* head2 = convertArr2DLL(arr2);
    Node* resultHead = add2numbers(head1, head2);
    print(resultHead);
    return 0;
}   