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
    void deleteNode(ListNode* node) {
        node->val = node->next->val; //copy the val of next node to target node
        node->next = node->next->next; //point to the next next node
        // copy next node to target node
        // remove? ignore? target node's next node
    }
}; //O(1)