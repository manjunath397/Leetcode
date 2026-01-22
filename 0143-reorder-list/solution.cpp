/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=nullptr;
        while(head)
        {
            ListNode* nxt=head->next;
            head->next=prev;
            prev=head;
            head=nxt;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=head;
        ListNode dummy(0);
        ListNode* prev=&dummy;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=reverse(slow->next);
        slow->next=nullptr;
        ListNode* first=head;
        while(second)
        {
            ListNode* t1=first->next;
            ListNode* t2=second->next;
            first->next=second;
            second->next=t1;
            first=t1;
            second=t2;
        }
        
        
        
      
       
        
    }
};
