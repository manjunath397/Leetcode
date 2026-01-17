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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev=&dummy;
        while(prev->next && prev->next->next)
        {
            ListNode* a=prev->next;
            ListNode* b=a->next;
            ListNode* c=b->next;

            prev->next=b;
            b->next=a;
            a->next=c;

            prev=a;
        }
        return dummy.next;
      
        
    }
};
