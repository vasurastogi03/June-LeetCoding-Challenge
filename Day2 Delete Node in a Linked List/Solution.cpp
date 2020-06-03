/*
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
        // node->val = node->next->val;
        // node->next = node->next->next;
        ListNode* tmp = node->next;     //https://leetcode.com/problems/delete-node-in-a-linked-list/discuss/65455/1-3-lines-C%2B%2BJavaPythonCCJavaScriptRuby
        *node = *node->next;
        delete tmp;
    }
};
