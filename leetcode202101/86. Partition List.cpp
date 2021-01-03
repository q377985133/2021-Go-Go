https://leetcode-cn.com/problems/partition-list/submissions/
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
    ListNode* partition(ListNode* head, int x) {
        ListNode *small_head = new ListNode(0);
        ListNode big_head = ListNode(0);
        ListNode *small_iter = small_head;
        ListNode *big_iter = &big_head;

        while(head)
        {
            if(head->val < x)
            {
                small_iter->next = head;
                small_iter = small_iter->next;
            }
            else
            {
                big_iter->next = head;
                big_iter = big_iter->next;
            }

            head = head->next;
        }

        big_iter->next = NULL;
        small_iter->next = big_head.next;

        return small_head->next;
    }
};