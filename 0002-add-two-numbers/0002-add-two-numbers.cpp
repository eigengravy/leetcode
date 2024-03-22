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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        int carry = 0;
        while(l1 != nullptr || l2!=nullptr || carry){
            int curval = carry;
            ListNode* dummy = new ListNode();
            temp->next = dummy;
            temp  = temp->next;
            if(l1 != nullptr){
                curval += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                curval += l2->val;
                l2 = l2->next;
            }
            carry = curval/10;
            curval = (curval)%10;
            temp->val = curval;
            
        }
        return ans->next;
    }
};