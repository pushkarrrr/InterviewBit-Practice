/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode*merge(ListNode*a,ListNode*b)
{
    if(a==NULL)
    {
        return b;
    }
    if(b==NULL)
    {
        return a;
    }
    ListNode*c;
    if(a->val<=b->val)
    {
        c=a;
        c->next=merge(a->next,b);
    }
    else
    {
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}
ListNode*midpoint(ListNode*head)
{
    ListNode*slow=head;
    ListNode*fast=head->next;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
ListNode* Solution::sortList(ListNode* head) {
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    ListNode*mid=midpoint(head);
    ListNode*a=head;
    ListNode*b=mid->next;
    mid->next=NULL;
    a=sortList(a);
    b=sortList(b);
    ListNode*c=merge(a,b);
    return c;
    
}
