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
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp=head;
        size_t sum=0,i;
        while(tmp!=NULL)
        {
            sum++;
            tmp=tmp->next;
        }

        tmp=head;
        
        for(i=0;i<sum/2;++i)
        {
            tmp=tmp->next;
        }
        return tmp;
        
    }
};
