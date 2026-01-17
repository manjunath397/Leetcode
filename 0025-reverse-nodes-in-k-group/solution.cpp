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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev=&dummy;
        while(true)
        {
            ListNode* check=prev;
            for(int i=0;i<k;i++)
            {
                check=check->next;
                if(!check) return dummy.next;
            }
            ListNode* curr=prev->next;
            ListNode* nxt=curr->next;
            for(int i=1; i < k;i++)
            {
                curr->next=nxt->next;
                nxt->next=prev->next;
                prev->next=nxt;
                nxt=curr->next;
            }
            prev=curr;
        }

        
        
    }
};
