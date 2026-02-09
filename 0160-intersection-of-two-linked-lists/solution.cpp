/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int m=0,n=0;
        while(temp1)
        {
            m++;
            temp1=temp1->next;
        }
        while(temp2)
        {
            n++;
            temp2=temp2->next;
        }
        int diff=abs(m-n);
        if(m>n)
        {
            while(diff--)
            {
                headA=headA->next;
            }
        }
        else
        {
            while(diff--)
            {
                headB=headB->next;
            }
        }
        while(headA && headB)
        {
             if(headA == headB) return headA;
            headA=headA->next;
            headB=headB->next;
           
        }
        return nullptr;
        
    }
};
