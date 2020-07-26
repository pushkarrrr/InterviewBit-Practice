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
ListNode* Solution::reverseBetween(ListNode* head, int m, int n) {
    ListNode*revs_prev=NULL;
    ListNode*revs=NULL;
    ListNode*revend=NULL;
    ListNode*revend_next=NULL;
    if(m==n)
    {
        return head;
    }
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    ListNode*temp=head;
    int i=1;
    while(i<=n&&temp!=NULL)
    {
        if(i<m)
        {
            revs_prev=temp;
        }
        if(i==m)
        {
            revs=temp;
        }
        if(i==n)
        {
            revend=temp;
            revend_next=temp->next;
        }
        temp=temp->next;
        i++;
    }
    revend->next=NULL;
    reverse(revs);
    temp=revs;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    if(revs_prev!=NULL)
    {
        revs_prev->next=revs;
    }
    else
    {
        head=revs;
    }
    temp->next=revend_next;
    return head;
}
