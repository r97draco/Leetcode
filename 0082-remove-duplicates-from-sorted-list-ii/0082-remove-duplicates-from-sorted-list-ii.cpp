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
    ListNode* result(vector<int>& vec){
        ListNode* ans = new ListNode(0);
        
        ListNode* res= ans;
        for(auto i: vec){
            ListNode* tmp = new ListNode(i);
            ans->next = tmp;
            ans= ans->next;
        }
        return res->next;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> vec;
        map<int,int> mp;
        while(head){
            mp[head->val]++;
            head=head->next;
        }
        for(auto i: mp){
            if(i.second==1){
                vec.push_back(i.first);
            }
        }
        ListNode* res= result(vec);
        return res;
    }
};