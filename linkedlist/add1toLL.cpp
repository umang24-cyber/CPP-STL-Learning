#include<bits/stdc++.h>     
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

class Solution {
public:
    Node* reverseList(Node* node) {
        Node* prev = nullptr;
        Node* current = node;

        while (current) {
            Node* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }
    void print(Node* head) {
        while (head != nullptr) {
            cout << head->data << " ";  
            head = head->next;
        }
        cout << endl;
    }

    Node* addOne(Node* head) {
        head = reverseList(head);

        Node* current = head;
        int carry = 1;  

        while (current && carry) {
            int sum = current->data + carry;
            current->data = sum % 10;
            carry = sum / 10;
 
            if (!current->next && carry) {
                current->next = new Node(carry);
                carry = 0;  
            }

            current = current->next;
        }

        head = reverseList(head);
        return head;
    }
};

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    Solution sol;
    head = sol.addOne(head);
    sol.print(head);
    return 0;
}