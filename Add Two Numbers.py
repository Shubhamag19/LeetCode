# Definition for singly-linked list.
class ListNode:
    def __init__(self, x=None):
        self.val = x
        self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        sum = l1.val + l2.val
        newNode = ListNode(sum%10)
        carry = sum//10
        temp1 = l1.next
        temp2 = l2.next
        temp = newNode
        while(temp1 != None or temp2 != None):
            sum = (temp1.val if temp1 else 0) + (temp2.val if temp2 else 0) + carry
            carry = sum//10
            temp.next = ListNode(sum%10)
            temp = temp.next
            temp1 = temp1.next if temp1 else None
            temp2 = temp2.next if temp2 else None
        
        if carry > 0:
            temp.next = ListNode(carry)
        
        return newNode
