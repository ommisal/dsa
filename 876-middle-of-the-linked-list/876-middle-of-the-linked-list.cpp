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
        int count=0;
        ListNode* mid = head;
        while(mid!=NULL)
        {
            count++;
            mid = mid->next;
        }
        mid = head;
        if(count%2==0)
        {
            for(int i=count/2-1;i<count-1;i++)
            {
                mid = mid->next;
            }
        }
        else
        {
            for(int i=count/2;i<count-1;i++)
            {
                mid = mid->next;
            }
        }
        
        return mid;
    }
};