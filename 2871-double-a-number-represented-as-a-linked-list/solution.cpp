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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);

        ListNode* curr = head;
        int carry = 0;

        while (curr) {
            int val = curr->val * 2 + carry;
            curr->val = val % 10;
            carry = val / 10;

            if (!curr->next && carry) {
                curr->next = new ListNode(carry);
               break;
            }
            curr = curr->next;
        }

        return reverse(head);
    }
};

