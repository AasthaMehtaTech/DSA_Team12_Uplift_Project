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
    ListNode* deleteDuplicates(ListNode* head) {
        // handle edge cases, if list is empty
        // or if it has one element, return it
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        // create an auxiliary head pointer
        // and a new iterator
        auto auxiliary_head = new ListNode(-1);
        auto iter = auxiliary_head;
        
        while (head != nullptr) {
            if (head->next && head->val == head->next->val) {
                // if current node value is equal to its next value
                // skip all nodes of that value
                int curr = head->val;
                while (head && head->val == curr) {
                    head = head->next;
                }
            } else {
                // otherwise, assign node to next iterator
                // increment new iterator and increment node
                iter->next = head;
                iter = iter->next;
                head = head->next;
            }
        }
        
        // we need to cut the cord
        iter->next = nullptr;
        
        // return new head
        return auxiliary_head->next;
    }
};
