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
        
		// if there are 0 or 1 elements, return the list
        if (head == nullptr || head->next == nullptr)
            return head;
        
        ListNode* oddHead = nullptr;
        ListNode* oddWalker = nullptr;
        
        ListNode* evenHead = nullptr;
        ListNode* evenWalker = nullptr;
        
        ListNode* walker = head;
        int index = 1;
		 
		// traverse the list till the final element
        while (walker != nullptr) {
            
			// current node is even
            if (index%2 == 0) {
                
				// if it is the first node for the even list
				// set the head to the current
                if (evenHead == nullptr) {
                    evenHead = walker;
                }
                
				// if it is not the first node 
				// set the walker to the current
                else {
                    evenWalker->next = walker;
                }
                
				// progress the evenWalker
                evenWalker = walker;
                
            }
            
            else {
                
                if (oddHead == nullptr) {
                    oddHead = walker;
                }
                
                else {
                    oddWalker->next = walker;                    
                }
                
                oddWalker = walker;
            }
            
            walker = walker->next;
            index++;
        }
        
		// the index ends on an invalide node
		
		// if the index is even, then the even list never terminated correctly
        if (index%2 == 0) {
            evenWalker->next = nullptr;
        }
        
		// else, the odd list never terminated correctly
        else {
            oddWalker->next = nullptr;
        }
        
		// merge the end of the odd list to the even head
        oddWalker->next = evenHead;
        
		// return the odd head
        return oddHead;
        
    }
};
