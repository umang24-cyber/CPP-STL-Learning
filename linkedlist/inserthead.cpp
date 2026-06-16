#include<bits/stdc++.h>
using namespace std;        

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};
class Solution{
public:
      Node* insertHead(Node* head, int newData){
      Node* newNode = new Node(newData, head);
      return newNode; 
      }
      
      Node* Print(Node* head){
        Node*temp = head;   
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }   
        cout<<endl;
      }
};


int main() {
    Solution sol;

    Node* head = new Node(2);
    head->next = new Node(3);

    cout << "Original List: ";
    sol.Print(head);

    head = sol.insertHead(head, 1);

    cout << "After Insertion at Head: ";
    sol.Print(head);

    return 0;
}