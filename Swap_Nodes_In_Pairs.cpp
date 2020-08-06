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
    ListNode* swapPairs(ListNode* head) {
        /*Extreme cases*/
        if (head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        ListNode* tmp1=head,*tmp2=tmp1->next->next,*tmp3=head->next,*prev=NULL,*tmp4=NULL;

        tmp1->next->next=tmp1;
        tmp1->next=tmp2;
        prev=tmp1;
        tmp1=tmp1->next;

        while(tmp1!=NULL&&tmp1->next!=NULL)
        {
            tmp2=tmp2->next->next;
            prev->next=prev->next->next;
            prev->next->next=tmp1;
            tmp1->next=tmp2;
            
            prev=prev->next->next;
            tmp1=tmp1->next;

        }
        return tmp3;
        
    }
};
