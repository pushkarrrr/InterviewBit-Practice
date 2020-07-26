/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* head, int k) {
    int count=k;
    ListNode*current=head;
    ListNode*prev=NULL;
    ListNode*next;
    while(current!=NULL&&count--)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    if(current!=NULL)
    {
        head->next=reverseList(current,k);
    }
    return prev;
}
