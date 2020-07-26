/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* head) {
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    ListNode*temp=head;
  
    while(temp!=NULL&&temp->next!=NULL) 
    {
        swap(temp->val,temp->next->val);
        temp=temp->next->next;
    }
    return head;
}
