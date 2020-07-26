/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
bool compare(ListNode*a,ListNode*b)
{
    if(a==NULL&&b==NULL)
    {
        return true;
    }
    ListNode*temp1=a;
    ListNode*temp2=b;
    while(temp1&&temp2)
    {
        if(temp1->val==temp2->val)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else
        {
            return false;
        }
    }
    if(temp1==NULL&&temp2==NULL)
    {
        return true;
    }
    return false;
}
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
int Solution::lPalin(ListNode* head) {
    if(head==NULL||head->next==NULL)
    {
        return 1;
    }
    ListNode*slow=head;
    ListNode*fast=head;
    ListNode*mid;
    while(1)
    {
        fast=fast->next->next;
        //EVEN LENGTH
        if(fast==NULL)
        {
            mid=slow->next;
            break;
        }
        //ODD LENGTH
        if(fast->next==NULL)
        {
            mid=slow->next->next;
            break;
        }
        slow=slow->next;
    }
    slow->next=NULL;
    reverse(mid);
    if(compare(head,mid))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
