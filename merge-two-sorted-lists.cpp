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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL || list2 == NULL)
            return list1;
        if(list1 == NULL)
            return list2;
        // setting node1 to list with starting lower or same value always.
        ListNode* node1 = (list1->val<=list2->val)?list1:list2;
        ListNode* node2 = (list1->val<=list2->val)?list2:list1;
        ListNode* ans = (list1->val<=list2->val)?list1:list2;
        while(!(node1==NULL || node2==NULL)) {
            if(node1->next == NULL && node2 != NULL) {
                node1->next = node2;
                break;
            } 
            if(node1->val<=node2->val && node1->next->val>=node2->val) {
                ListNode* temp = node2;
                node2=node2->next;
                temp->next=node1->next;
                node1->next=temp;
                node1=node1->next;
            } else {
                node1=node1->next;
            }
        }
        return ans;
    }
};
