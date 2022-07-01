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
    ListNode *detectCycle(ListNode *head) {
        unordered_set <ListNode*> addr;
        while(head !=  NULL) {
            if(addr.find(head) == addr.end()) {
                // address is not present yet.
                addr.insert(head);
                head = head->next;
            } else {
                // address is already present in the set.
                return head;
            }
        }
        return NULL;
    }
};
