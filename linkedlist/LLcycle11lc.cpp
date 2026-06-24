#include<bits/stdc++.h>
using namespace std;    
class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

// typa brute as time O(n) and space O(n) using hashset to store the visited nodes
    ListNode *detectCycle1(ListNode *head) {
        unordered_set<ListNode*> st;

        while(head != nullptr) {
            if(st.find(head) != st.end()) {
                return head;
            }

            st.insert(head);
            head = head->next;
        }

        return nullptr;
    }
};


class Solution {
public:
    ListNode *detectCycle2(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                ListNode* entry = head;
                while(entry!=slow){
                    entry=entry->next;
                    slow=slow->next;
                }
                return entry;
            }
        }
        return nullptr;
    }
};

int main(){
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // Create a cycle

    Solution sol;
    ListNode* cycleStart = sol.detectCycle2(head);

    if(cycleStart) {
        cout << "Cycle detected at node with value: " << cycleStart->val << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}   