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
        int sum = 0;
        int carry = 0;

        // creating 'prev' (previous) node and the 'curr' (current) node.
        // 
        // In the beginning, both of them would be the same but later on, 
        // 'prev->next' would become 'curr' and 'prev' node would be deleted.
        // 
        // The reason is in each iteration we would be storing the result in
        // the next node from the 'curr' one, pointed by 'curr->next'. 
        // So, at the end we have to return the address of the first node of 
        // the Linked List and that one would be 'prev->next'
        // 
        // So, basically, the main perpose of 'prev' node is to keep the 
        // backup of the address from where we had started. Because 'curr'
        // would keep updating in each iteration.

        ListNode *prev = new ListNode;
        ListNode *curr = prev;
        
        while(l1 || l2) {
            // below two conditions are required when both the linked lists
            // are of different size
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;

            // Apart from adding two values, adding carry as well
            // which would be 0 in the first iteration
            sum = val1 + val2 + carry;

            // Updating carry, which will be used in the next iteration
            carry = sum/10;

            // Creating a node with the value=sum%10 at the address
            // pointed by curr->next
            curr->next = new ListNode(sum%10);

            // Updating the curr node to the next node in the resultant linked list
            curr = curr->next;
            
            // to check whether l1 is pointing to nullptr or not
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }

        // the following condition is required to address edge cases
        // e.g. [5] + [5] would be [0,1]
        if(carry)
            curr->next = new ListNode(carry);
        
        curr = prev->next;
        delete prev;
        
        return curr;
    }
};
