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
    ListNode* removeElements(ListNode* head, int val) {
        
        //if the linked list is empty
        if(head==NULL)
            return head;
        
        ListNode* tmp=head;
        
        //if the val in head
        while (tmp!=NULL&&tmp->val==val)
        {
            head=head->next;
            delete tmp;
            tmp=head;
        }


        while(tmp!=NULL)
        {
        if(tmp->next!=NULL&&tmp->next->val==val)
            {
            ListNode* tmp2=tmp->next;
            tmp->next=tmp->next->next;
            delete tmp2;
            }
         else
         {
             tmp=tmp->next;
         }   
        
        }
        return head;
    }
};
