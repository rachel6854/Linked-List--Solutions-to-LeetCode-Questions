# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        tmp=head;
        arr=[];
        while(tmp!=None):
            arr.append(tmp.val);
            tmp=tmp.next;
        return arr==arr[::-1];
