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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curra= headA;
        ListNode *currb = headB;
        int lena=0, lenb= 0;
        while(curra){
            lena++; curra= curra->next;
        }
        while(currb){
            lenb++; currb= currb->next;
        }

        while(lena != lenb){
            if(lena > lenb){
                headA= headA->next;
                lena--;
            }
            if(lenb > lena){
                headB= headB->next;
                lenb--;
            }
        }

        while(headA && headB){
            if(headA == headB){
                return headA;
            }
            else{
                headA= headA->next;
                headB= headB->next;
            }
        }

        return NULL;
    }
};