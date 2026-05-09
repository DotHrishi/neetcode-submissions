# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        temp=head
        cnt=0
        while temp:
            cnt+=1
            temp=temp.next

        tar=cnt-n
        if cnt==n:
            return head.next
        
        t2=head
        c2=0
        while t2:
            c2+=1
            if c2==tar:
                t2.next=t2.next.next
            t2=t2.next
        
        return head
        