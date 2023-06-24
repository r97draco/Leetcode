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
        ListNode *res = new ListNode(-1);
        ListNode *ans = res;
        int carry = 0;
        while(l1 && l2){
            int sum = l1->val + l2->val + carry;
            carry = sum/10;
            sum = sum%10;
            ListNode* tmp = new ListNode(sum);
            ans->next = tmp;
            ans = ans->next;
            
            l1= l1->next;
            l2= l2->next;
        }
        while(l1){
            int sum = l1->val+ carry;
            carry = sum/10;
            sum = sum%10;
            ListNode* tmp = new ListNode(sum);
            ans->next = tmp;
            ans = ans->next;
            l1= l1->next;
        }
        while(l2){
            int sum = l2->val+ carry;
            carry = sum/10;
            sum = sum%10;
            ListNode* tmp = new ListNode(sum);
            ans->next = tmp;
            ans = ans->next;
            l2= l2->next;
        }
        if(carry){
           ListNode* tmp = new ListNode(1);
            ans->next = tmp;
        }
        return res->next;
    }
};