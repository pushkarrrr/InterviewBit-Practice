/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* head, int k) {
    if(head==NULL||k==0)
    {
        return NULL;
    }
    ListNode*slow=head;
    ListNode*fast=head;
    while(k--)
    {
        
        if(fast->next==NULL) //DELETE FROM HEAD
        {
            return head->next;
        }
        fast=fast->next;
    }
    ListNode*prev;
    while(fast!=NULL)
    {
        fast=fast->next;
        prev=slow;
        slow=slow->next;
    }
    prev->next=slow->next;
    delete slow;
    return head;
}
