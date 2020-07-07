class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode *p=head,*q=head;
        if(head==NULL || head->next==NULL) return false;
        
        while(p){
            p=p->next;
            q=q->next;
            if(p){
                p=p->next;
            }
            if(p==q){
                return true;
            }
        }
        return false;
    }
};
