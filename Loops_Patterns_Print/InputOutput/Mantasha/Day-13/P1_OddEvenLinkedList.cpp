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
    ListNode* oddEvenList(ListNode* head) {

        if(!head)
            return head;        
        else if(!head->next)
            return head;

        ListNode *oddHead = head, *evenHead = head->next;
        ListNode *oddNode = oddHead, *evenNode = evenHead;
        
        while(evenNode && evenNode->next) {
            
            oddNode->next = evenNode->next;
            evenNode->next = evenNode->next->next;
            
            oddNode = oddNode->next;
            evenNode = evenNode->next;
        }
        
        oddNode->next = evenHead;
        return oddHead;
    }
};
