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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || n==0)
        return head;
        if(!head->next && n==1)
        return NULL;
        ListNode *temp=head,*prev;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        count=count-n;
        // if the deleting node is head
        if(count == 0) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        temp=head;
        while(count--)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp==head)
        return head->next;
        prev->next=temp->next;
        delete(temp);
        return head;

    }
};
