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
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        ListNode* temp = new ListNode(0,head);
        ListNode* curr = temp;
        while(curr->next&&curr->next->next)
        {
            ListNode* res = curr->next;
            curr->next = curr->next->next;
            res->next = res->next->next;
            curr->next->next = res;
            curr = res;
        }
        return temp->next;
    }
};