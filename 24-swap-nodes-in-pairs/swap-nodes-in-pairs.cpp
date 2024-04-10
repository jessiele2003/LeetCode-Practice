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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode * newHead = head->next;
        head->next = swapPairs(head->next->next);
        newHead->next = head;
        return newHead;
    }
};

/*
1        2           3         4
head     newhead
2             1          3         4
newhead     head->next  
2                 1          3         4
newhead->next     head
*/