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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head->next) return head;
        ListNode* prev=head;
        ListNode* slow=head;
        ListNode* fast=head;
        int s1=k-1;
        while(s1--)
        {
            prev=prev->next;
        }
        int s2=k;
        while(s2--){
            fast=fast->next;
        }
        while(fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        swap(prev->val,slow->val);
        return head;
        
    }
};
