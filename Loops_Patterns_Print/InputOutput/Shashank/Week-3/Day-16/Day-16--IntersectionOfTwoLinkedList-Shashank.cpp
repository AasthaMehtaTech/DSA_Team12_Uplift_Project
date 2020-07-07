class Solution {
public:
    int length(ListNode *node) {
        int count=0;
        while(node) {
            count++;
            node = node->next;
        }
        return count;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(!headA || !headB)
            return NULL;
        
        int l1 = length(headA);
        int l2 = length(headB);
        
        if(l1 > l2)
            for(int i=0; i<l1-l2; i++)
                headA = headA->next;

        else if(l2 > l1)
            for(int i=0; i<l2-l1; i++)
                headB = headB->next;
        
        while(headA && headB) {
            
            if(headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        
        return NULL;
    }
};
