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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)return false;
        ListNode *fast = head->next;
        ListNode *slow = head;
        
        while(fast != slow ){
            if(fast->next == NULL || fast->next->next==NULL || slow == NULL ){
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
        
        
    }
};