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

class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return NULL;
        ListNode* prev=NULL, *curr=head, *next=head->next;
        if(!next)
            return head;
        while(next){
            if(curr && curr->val!=next->val){
                if(!prev){
                    prev=curr;
                    head=prev;
                }
                else{
                    prev->next=curr;
                    prev=prev->next;
                }
                curr=curr->next;
                next=next->next;
                prev->next=NULL;
            }
            else{
                while(next && curr->val==next->val){
                    curr=curr->next;
                    next=next->next;
                }
                curr=next;
                if(next)
                    next=next->next;
            }
        }
        if(curr){
            if(!prev){
                prev=curr;
                head=curr;
            }
            else
                prev->next=curr;
        }
        if(!prev)
            return prev;
        return head;
    }
};
