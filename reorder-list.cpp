/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 void reverse(ListNode*&head)
{
    ListNode*c=head;
    ListNode*p=NULL;
    ListNode*n;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}
ListNode* createnode(int n)
{
    ListNode*t = new ListNode(n);
    return t;
}
ListNode* Solution::reorderList(ListNode* head1) {
    if(head1==NULL||head1->next==NULL)
    {
        return head1;
    }
    ListNode*fast=head1;
    ListNode*slow=head1;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    ListNode*head2=slow->next;
    slow->next=NULL;
    reverse(head2);
    ListNode*head=createnode(0);
    ListNode*current=head;
    while(head1!=NULL||head2!=NULL)
    {
        if(head1)
        {
            current->next=head1;
            current=current->next;
            head1=head1->next;
        }
        if(head2)
        {
            current->next=head2;
            current=current->next;
            head2=head2->next;
        }
    }
    return head->next;
    
}
