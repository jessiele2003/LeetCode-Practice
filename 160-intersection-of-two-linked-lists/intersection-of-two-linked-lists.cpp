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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * ptrA = headA;
        ListNode * ptrB = headB;
        while(ptrA != ptrB) {
            if(ptrA == NULL) {
                ptrA = headB;
            }
            else
            ptrA = ptrA->next;
            //after run listA, start to run from the head of listB
            if(ptrB == NULL) {
                ptrB = headA;
            }
            else
                ptrB = ptrB->next;

        }
        return ptrA;  //not matter which list you return
    }
};