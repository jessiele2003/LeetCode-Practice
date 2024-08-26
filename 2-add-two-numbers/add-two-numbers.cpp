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
        //create a new node to hold the new list
        ListNode * dummy = new ListNode();
        ListNode * current = dummy;
        int carry = 0;

        //traverse
        while(l1 != NULL || l2 != NULL || carry != 0) {
            int value1;
            int value2;
            if (l1 != NULL)
                value1 = l1->val;
            else
                value1 = 0;
            
            if (l2 != NULL)
                value2 = l2->val;
            else
                value2 = 0;

            // add up the numbers
            int sum = value1 + value2 + carry;
            //get the carry if the sum over 10
            carry = sum / 10;
            //get only the first number
            int digit = sum % 10;

            ListNode * newNode = new ListNode(digit);
            current->next = newNode;
            current = current->next;

            //update pointers to traverse
            if(l1 != NULL)
                l1 = l1->next;
            if(l2 != NULL)
                l2 = l2->next;

        }

        ListNode * result = dummy->next;
        delete dummy;
        return result;
    }
};