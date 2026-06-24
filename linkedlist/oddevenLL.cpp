#include<bits/stdc++.h>
using namespace std;    

struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

// MY FIRST APPROACH -- TLE(TIME LIMIT EXCEEDED) also wrong approach as it is going for values not nodes
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        unordered_map<int,int> odd;
        unordered_map<int,int> even;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
            while(fast!=nullptr){
                odd[fast->val]++;
            }
            while(slow!=nullptr){
                even[slow->val]++;
            }            
        }
        for(auto it : odd){
           cout << it.first << endl;
        }
        for(auto it : even){
           cout << it.first << endl;
        }
        return 0;
    }
};

// BRUTE FORCE APPROACH -- O(N) TIME AND O(N) SPACE
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int> odd;
        vector<int> even;
        ListNode* temp = head;
        int pos =1;
        while(temp!= nullptr){
            if(pos%2==1){
                odd.push_back(temp->val);
            }
           else even.push_back(temp->val);
          pos++;
          temp = temp->next; 
        }
        temp = head;
        for(int x: odd){
            temp->val =x;
            temp = temp->next;
        }
        for(int x: even){
            temp->val =x;
            temp = temp->next;
        }
        return head;
    }
};      

// OPTIMAL APPROACH -- O(N) TIME AND O(1) SPACE
class Optimal{
public:
    ListNode* oddevenhead(ListNode* head){
        if(head==nullptr) return head;
        ListNode* odd = head;
        ListNode* even = head->next;        
        ListNode* evenHead = even;
        while(even!=nullptr && even->next!=nullptr){
            odd->next = odd->next->next;
            odd = odd->next;
            even->next = even->next->next;
            even = even->next->next;
        }
        odd->next = evenHead;
        return head;    
    }
};