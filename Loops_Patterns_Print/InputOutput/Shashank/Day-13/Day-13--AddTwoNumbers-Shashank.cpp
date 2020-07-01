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
    ListNode* outputList = new ListNode(0);
    const ListNode* nextDummy = l1;
    ListNode* nextOrg = outputList;
    int carry = 0;

    while (nextDummy) {
      nextOrg->val = nextDummy->val;
      if (nextDummy->next) {
        nextOrg->next = new ListNode(0);
        nextOrg = nextOrg->next;
      }
      nextDummy = nextDummy->next;
    }

    nextOrg = outputList;
    nextDummy = l2;

    while (nextDummy) {
      int num = nextDummy->val + nextOrg->val;

      if ((num + carry) >= 10) {
        nextOrg->val = ((num + carry) % 10);
        carry = 1;
      } else {
        nextOrg->val = num + carry;
        carry = 0;
      }
      if (nextDummy->next && !nextOrg->next) {
        nextOrg->next = new ListNode(0);
      }
      nextDummy = nextDummy->next;
      if (!nextDummy && carry > 0 && !nextOrg->next) {
        nextOrg->next = new ListNode(carry);
        carry = 0;
      }
      if (nextOrg->next) nextOrg = nextOrg->next;
    }

    if (carry) {
      while (nextOrg) {
        int num = nextOrg->val + carry;
        if (num >= 10) {
          nextOrg->val = num % 10;
          carry = 1;
          if (!nextOrg->next) {
            nextOrg->next = new ListNode(carry);
            carry = 0;
          }
        } else {
          nextOrg->val = num;
          carry = 0;
        }
        nextOrg = nextOrg->next;
      }
    }

    return outputList;
  }
};
