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
        
        ListNode* forward = head;
        ListNode* result = new ListNode(-1);
        ListNode* answer = result;
        int count = 0;
        while(head){
            st.push(head);
            head= head->next;
            count++;
        }
        int flag = count%2;
        count = count/2;
            
        while(count --){
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
    }
};