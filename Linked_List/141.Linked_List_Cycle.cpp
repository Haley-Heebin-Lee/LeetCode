/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Time: O(n) Space: O(1)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false;
        } else {
            ListNode *slow = head;
            ListNode *fast = head->next;
            
            while (slow != fast) {
                if (fast == NULL || fast->next == NULL) {
                    return false;
                } else {
                    slow = slow->next;
                    fast = fast->next->next;
                }
            }
            return true;
        }
    }
};
