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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *tmp1=l1,*tmp2=l2;
        int add,val1,val2;
        
        ListNode *head=new ListNode((tmp1->val+tmp2->val)%10);
        int rest=(tmp1->val+tmp2->val)/10;
        ListNode *last=head;
        tmp1=tmp1->next;
        tmp2=tmp2->next;
        
        while(tmp1!=NULL||tmp2!=NULL)
        {
            if(tmp1==NULL)
                val1=0;
            else val1=tmp1->val;
            if (tmp2==NULL)
                val2=0;
            else val2=tmp2->val;
            add=(val1+val2+rest)%10;
            last->next=new ListNode(add);
            last=last->next;
            rest=(val1+val2+rest)/10;
            if(tmp1!=NULL)
                tmp1=tmp1->next;
            if (tmp2!=NULL)
                tmp2=tmp2->next;
        }
        if(rest!=0)
            last->next=new ListNode(rest);
        return head;
    }
};
