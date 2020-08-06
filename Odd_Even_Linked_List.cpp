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
    
    ListNode* concatenate(ListNode* l1,ListNode* l2)
    {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode* tmp=l1;
        
        while(tmp->next!=NULL)
          {
            tmp=tmp->next;   
          }
        tmp->next=l2;
        return l1;
    }
    
    ListNode* oddEvenList(ListNode* head) 
    {
        ListNode *odd_node=NULL,*even_node=NULL,*last_even=NULL,*last_odd=NULL,*tmp=head,*next=NULL;
        size_t i=0;

        for(i=0;tmp!=NULL;++i)
        {
            next=tmp->next;
            if(i==0)
            {
                even_node=tmp;
                last_even=tmp;
                even_node->next=NULL;
                
            }
            else if(i==1)
            {
                odd_node=tmp;
                last_odd=tmp;
                odd_node->next=NULL;
                
                
            }
            else if(i%2==0)
            {
                last_even->next=tmp;
                tmp->next=NULL;
                last_even=last_even->next;
                
            }
            else
            {
                last_odd->next=tmp;
                tmp->next=NULL;
                last_odd=last_odd->next;
            }
            tmp=next;
        }
        return concatenate(even_node,odd_node);
    }
};
