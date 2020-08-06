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
    
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        
        ListNode *new_list=NULL,*new_head;
        ListNode *tmp1=l1,*tmp2=l2;
        ListNode *prev;
        if(tmp1==NULL)
            if(tmp2==NULL)
                return NULL;
            else return tmp2;
        else if (tmp2==NULL)
            return tmp1;
        if(tmp1->val<tmp2->val)
        {
            new_list=tmp1;
        }
        else
        {
            new_list=tmp2;
        }
        new_head=new_list;
        while(tmp1!=NULL&&tmp2!=NULL)
        {
            if ((tmp1->val)<(tmp2->val))
            {
                prev=tmp1->next;
                new_head->next=tmp1;
                tmp1=prev;
            }
            else
            {
                prev=tmp2->next;
                new_head->next=tmp2; 
                tmp2=prev;
            }
            
            new_head=new_head->next;          
        }
        
        if(tmp1!=NULL)
        {
            while(tmp1!=NULL)
            {
                prev=tmp1->next;
                new_head->next=tmp1;
                tmp1=prev;
                new_head=new_head->next;
            }
        }
        else if(tmp2!=NULL)
           {
            while(tmp2!=NULL)
            {
                prev=tmp2->next;
                new_head->next=tmp2;
                tmp2=prev;
                new_head=new_head->next;
            }    
           }
        return new_list;
        
    }
};
