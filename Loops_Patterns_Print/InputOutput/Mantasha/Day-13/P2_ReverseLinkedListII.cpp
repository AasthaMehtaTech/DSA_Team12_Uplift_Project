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
	ListNode* reverseBetween(ListNode* head, int m, int n) 
	{
		if(head == NULL || m > n) return head;
		ListNode *first = NULL, *second = head, *prev = NULL, 
				 *temp1 = NULL, *temp2 = NULL;
		int num = 1;
		while(true)
		{
			if(num+1 == m) prev = second;
			if(num == m) first = second;
			if(num == n)
			{
				num = 0;
				if(!prev) head = second;
				else prev->next = second;
				while(num < (n-m))
				{
					temp2 = first->next;
					temp1 = second->next;
					second->next = first;
					first->next = temp1;
					first = temp2;
					num++;
				}
				break;
			}
			second = second->next;
			num++;
		}
		return head;
	}
};
