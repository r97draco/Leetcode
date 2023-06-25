# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        res = ListNode(-1)
        ans = res
        carry = 0
        summ = 0

        while l1 or l2:
            if l1 is not None:
                summ += l1.val
                l1 = l1.next
            if l2 is not None:
                summ += l2.val
                l2 = l2.next
            summ += carry
            carry = summ // 10
            summ = summ % 10

            res.next = ListNode(summ)
            res = res.next
            summ = 0

        if carry > 0:
            res.next = ListNode(carry)

        return ans.next
        