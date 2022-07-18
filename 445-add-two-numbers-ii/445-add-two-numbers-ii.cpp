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
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nxt = NULL;
        
        while(curr!=NULL)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        int sum = 0,carry = 0;
        while(l1!=NULL&&l2!=NULL)
        {
            int val = l1->val+l2->val+carry;
            carry = val/10;
            sum = val%10;
            dummy->next = new ListNode(sum);
            dummy = dummy->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1)
        {
            int val = l1->val+carry;
            carry = val/10;
            sum = val%10;
            dummy->next = new ListNode(sum);
            dummy = dummy->next;
            l1 = l1->next;
            //l2 = l2->next;
        }
        while(l2)
        {
            int val = l2->val+carry;
            carry = val/10;
            sum = val%10;
            dummy->next = new ListNode(sum);
            dummy = dummy->next;
            //l1 = l1->next;
            l2 = l2->next;
        }
        if(carry)
        {
            dummy->next = new ListNode(carry);
        }
        return reverse(temp->next);
    }
};