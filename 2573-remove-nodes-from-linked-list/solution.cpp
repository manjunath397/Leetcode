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
     ListNode * reverse(ListNode* head)
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
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        ListNode* curr=head;
        ListNode*prev=nullptr;
        int max_val=0;
        while(curr)
        {
            if(curr->val >= max_val)
            {
                max_val=curr->val;
                prev=curr;
                curr=curr->next;
            }
            else
            {
                prev->next=curr->next;
                curr=curr->next;
            }
        }
        return reverse(head);
        
        
    }
};
