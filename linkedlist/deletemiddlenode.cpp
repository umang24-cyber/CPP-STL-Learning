#include<bits/stdc++.h>
using namespace std;        

struct ListNode{
    int data;
    ListNode* next;
    ListNode(int x){
        data = x;
        next = nullptr;
    }
};
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* curr = head;
        int cnt = 0;
        while(curr!= nullptr){
            curr = curr->next;
            cnt++;
        }
        curr = head;
        if(head == nullptr || head->next == nullptr)
            return nullptr;
        for(int i =0; i<cnt/2-1;i++){
            curr = curr->next;        
        }
        curr->next = curr->next->next;
        return head;
    }
};