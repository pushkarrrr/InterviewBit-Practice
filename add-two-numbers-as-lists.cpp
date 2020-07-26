/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* head1, ListNode* head2) {
    int carry=0;
    ListNode*head=new ListNode(0);
    ListNode*start=head;
    while(head1||head2)
    {
        int current_sum=carry;
        if(head1!=NULL)
        {
            current_sum+=head1->val;

        }
        if(head2!=NULL)
        {
            current_sum+=head2->val;
        }
        int remain=current_sum%10;
        carry=current_sum/10;
        head->next=new ListNode(remain);
        if(head1!=NULL)
        {
        head1=head1->next;
        }
        if(head2!=NULL)
        {
        head2=head2->next;
        }
        head=head->next;
    }
    if(carry!=0)
    {
        head->next=new ListNode(carry);
    }
    return start->next;
}
