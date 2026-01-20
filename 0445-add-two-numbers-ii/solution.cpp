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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode*curr=&dummy;
        ListNode* temp1=l1;
        stack<int> st1;
        stack<int> st2;
        while(temp1)
        {
            st1.push(temp1->val);
            temp1=temp1->next;
        }
        ListNode* temp=l2;
        while(temp)
        {
            st2.push(temp->val);
            temp=temp->next;
        }
        int carry=0;
        while(!st1.empty() || !st2.empty() || carry)
        {
            int sum=carry;
            if(!st1.empty())
            {
                sum+=st1.top();
                st1.pop();
            }
            if(!st2.empty())
            {
                sum+=st2.top();
                st2.pop();
            }
            carry=sum/10;
            curr->next= new ListNode(sum%10);
            curr=curr->next;
        }
        return reverse(dummy.next);
        
    }
};
