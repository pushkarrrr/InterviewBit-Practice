/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    ListNode*temp=head;
    while(temp->next!=NULL)
    {
        if(temp->val!=temp->next->val)
        {
            temp=temp->next;
        }
        else
        {
            ListNode*del=temp->next;
            temp->next=temp->next->next;
            delete del;
        }
    }
    return head;
}
