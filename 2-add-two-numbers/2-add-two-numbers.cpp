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
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
        ListNode *c= new ListNode(-1);
        ListNode *ans=c;
        int r= 0, k=0;
        while(a || b){
            if(a && b){
                int va = a->val+ b->val + k;
                r = va%10;
                k = va/10;
                ListNode *tmp = new ListNode(r);
                c->next=tmp;
                c=c->next;
                
                a= a->next;
                b= b->next;
            }
            else if(a){
                int va = a->val + k;
                r = va%10;
                k = va/10;
                ListNode *tmp = new ListNode(r);
                c->next=tmp;
                c=c->next;
                
                a=a->next;
            }
            else{
                int va = b->val + k;
                r = va%10;
                k = va/10;
                ListNode *tmp = new ListNode(r);
                c->next=tmp;
                c=c->next;
                
                b=b->next;
            }
        }
        if(k) {
            ListNode * tmp = new ListNode(1);
            c->next=tmp;
        }
        return ans->next;
    }
};