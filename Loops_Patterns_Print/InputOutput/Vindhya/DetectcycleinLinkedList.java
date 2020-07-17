/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution 
{
    public boolean hasCycle(ListNode head) 
    {
        ListNode p = head;
        ListNode q = head;
        while(p !=null && q!=null && q.next!=null)
        {
            p = p.next;
            q =q.next.next;
            if(p==q)
            {
                return true;
            }
        }
        return false;
    }
}
