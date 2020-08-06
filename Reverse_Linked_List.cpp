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
    
    ListNode* reverseList(ListNode* head) {
        ListNode* new_head=NULL;
        ListNode* tmp=head;
        ListNode* prev;
        while(tmp!=NULL)
        {
        prev=tmp->next;
        tmp->next=new_head;
        new_head=tmp;
        tmp=prev;
        }
        return new_head;
        
    }
};
