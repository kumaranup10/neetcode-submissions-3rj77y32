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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)
        return head;

        ListNode* curr=head,*front,*newh=NULL;
        while(curr)
        {
            front=curr->next;
            curr->next=newh;
            newh=curr;
            curr=front;
        }
        return newh;
    }
};
