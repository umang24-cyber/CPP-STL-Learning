#include<bits/stdc++.h>     
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
// my approach -- O(n) time and O(1) space
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int cnt1 = 0;
        while(curr!= nullptr){
            curr = curr->next;
            cnt1++;
        }
        if(cnt1 ==n){
            return head->next;
        }
        curr = head;
        int m = cnt1-n;
        for(int i = 0; i<m-1;i++){
             curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};

// optimal approach using two pointer technique time O(n) and space O(1)
