/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * slow = head;
        ListNode * fast = head;
        
        //fast goes 2 nodes at a time
        //slow goes 1 node at a time
        while(fast && fast->next) {
            //traverse
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};



/*

            3   2   0   4
1st:        sf

2nd:            s   f

3rd:            f   s

4th:                    fs   =>this means there is a cycle where the 2 pointers meet
*/