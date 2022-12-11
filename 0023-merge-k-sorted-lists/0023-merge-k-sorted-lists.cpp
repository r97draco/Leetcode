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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        multiset<int> sett;
        ListNode* ans= new ListNode(-1);
        ListNode* res= ans;
        
        for(auto i :lists){
            while(i){
                sett.insert(i->val);
                i= i->next;
            }
        }
        
        for(auto i: sett){
            ListNode* tmp = new ListNode(i);
            
            ans->next = tmp;
            ans= ans->next;
            
            
        }
        return res->next;
    }
};