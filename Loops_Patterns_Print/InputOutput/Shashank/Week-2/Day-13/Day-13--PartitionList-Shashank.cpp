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
    ListNode* partition(ListNode* head, int x) 
    {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode  *before_head = new ListNode(-1),
                 *before_iter = before_head,
                 *after_head  = new ListNode(-1),
                 *after_iter = after_head;
        
        while(head)
        {
            if(head->val < x)
            {
                before_iter->next = head;
                before_iter = before_iter->next;
            }
            
            else
            {
                after_iter->next = head;
                after_iter = after_iter->next;
            }
            
            head = head->next;
        }
        
        before_iter->next = after_head->next;
        after_iter->next = NULL;
        before_head = before_head->next;
        
        return before_head;
        
        
    }
};
