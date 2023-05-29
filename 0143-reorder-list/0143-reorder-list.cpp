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
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        
        ListNode* For = head;
        ListNode* forward = head;
        ListNode* Rev = nullptr;
        ListNode* Res = new ListNode(-1);
        ListNode* Ans = Res;
        ListNode* result = new ListNode(-1);
        ListNode* answer = result;
        int count = 0;
        while(head){
            ListNode* tmp = new ListNode(head->val);
            st.push(head);
            tmp -> next = Rev;
            Rev = tmp;
            head= head->next;
            count++;
        }
        int flag = count%2;
        count = count/2;
            
        while(count --){
            ListNode* tmpa = new ListNode(For->val);
            For = For->next;
            ListNode* tmpb = new ListNode(Rev->val);
            Rev = Rev->next;
            // cout<<tmpa->val<<" "<<tmpb->val<<" ";
            Res->next = tmpa;
            Res = Res->next;
            Res->next = tmpb;
            Res = Res->next;
            
            result->next = forward;
            forward= forward->next;
            result->next->next = st.top();
            
            result = result->next->next;
            st.pop();
        }
        if(flag){result->next = forward;
        result = result->next;}
        result->next = NULL;
        
        
        head=  answer->next;
        // ListNode* curr =Ans->next;
        ListNode* curr =head;
        while(curr){
            cout<<curr->val<<" ";
            curr=curr->next;
        }
        
    }
};