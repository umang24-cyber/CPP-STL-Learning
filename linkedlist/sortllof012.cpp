#include<bits/stdc++.h> 
using namespace std;
// okish approach

/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        Node* temp = head;
        while(temp!= nullptr){
            if(temp->data==1){
                cnt1++;
            }
            if(temp->data==0){
                cnt0++;
            }
            if(temp->data==2){
                cnt2++;
            }
            temp = temp->next;
        }
        temp = head;
        while(temp!=nullptr){
            if(cnt0){
                temp->data =0;
                cnt0--;
            }
            else if(cnt1){
                temp->data=1;
                cnt1--;
            }
            else {temp->data = 2; cnt2--;}
            temp = temp->next;
        }
        return head;
    }
};

//optimal approach

  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    Node* segregate(Node* head) {
        if(head== nullptr || head->next==nullptr) return head;
      Node* zerohead = new Node(-1);
      Node* onehead = new Node(-1);
      Node* twohead =  new Node(-1);
      Node* zero = zerohead;
      Node* one = onehead;
      Node* two = twohead;
      Node* temp = head;
      while(temp!= nullptr){
          if(temp->data==0){
              zero->next = temp;
              zero = zero->next;
          }
          if(temp->data==1){
              one->next = temp;
              one = one->next;
          }
          if(temp->data==2){
              two->next = temp;
              two = two->next;
          }
          temp = temp->next;
      }
      zero->next = (onehead->next) ? (onehead->next) : (twohead->next);
      one->next = twohead->next;
      two->next = NULL;
      Node* newhead = zerohead->next;
      
      delete zerohead;
      delete onehead;
      delete twohead;
      return newhead;
    }
};