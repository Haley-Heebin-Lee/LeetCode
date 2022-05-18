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

//iteration
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode temp{0};
        auto curr = &temp;
        
        while (list1 && list2) {
            if (list1->val <= list2->val) {//if list 1 value is smaller or same than list2
                curr->next = list1; // current list's next = list1
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        //insert the last element to curr
        curr->next = list1!=NULL ? list1 : list2;

        return temp.next;
    }
};


//recursion
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) {
            return list2;
        } else if(list2 == NULL) {
            return list1;
        } else if(list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};