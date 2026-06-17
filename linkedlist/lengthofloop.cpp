// gfg solution for finding length of loop in linked list
// optimal approach using floyd's cycle detection algorithm 
#include<bits/stdc++.h>
using namespace std;    

class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
    int countlooplength(Node* meetingPoint){
        Node* temp = meetingPoint;
        int length = 1;

        while (temp->next != meetingPoint) {
            temp = temp->next;
            length++;
        }
        return length;
    }
    int lengthOfLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return countlooplength(slow);
            }
        }
        return 0;
    }
};