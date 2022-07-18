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
    int countNode(ListNode* head)
    {
        int count = 0;
        ListNode* curr = head;
        while(curr!=NULL)
        {
            count++;
            curr = curr->next;
        }
        return count;
    }
//     ListNode* reverse(ListNode* head)
//     {
        
//     }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int val = countNode(head);
        int ans = val-n;
        ListNode* temp = head;
        ListNode* prev = NULL;
        if(ans==0)
            return head->next;
        if(head==NULL)
            return NULL;
        if(head->next==NULL&& n==1)
        {
            return NULL;
        }
        for(int i=0;i<ans;i++)
        {
            prev  = temp;
            temp =temp->next;
           
        }
        if(prev==NULL)
            return head->next;
        prev->next = temp->next;
        return head;
    }
};