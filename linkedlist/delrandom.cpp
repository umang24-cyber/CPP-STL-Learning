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
void deleteNode(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return; 
    }
}