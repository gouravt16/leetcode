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
    ListNode* middleNode(ListNode* head) {
        ListNode* itr=head;
        
        while(itr != NULL) {
            if(itr->next == NULL) {
                return head;
            }
            itr = itr->next->next;
            head = head->next;
        }
        return head;
    }
};
