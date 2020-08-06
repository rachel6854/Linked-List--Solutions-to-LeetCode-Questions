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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* tmp=head,*prev;
        
        while(tmp!=NULL)
        {
            if(tmp->next!=NULL&&tmp->val==tmp->next->val)
            {
                prev=tmp->next;
                tmp->next=tmp->next->next;
                delete prev;
            }
            else
            {
                tmp=tmp->next;
            }
        }
        return head;
    }
   
};
