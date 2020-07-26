/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* head, int k) {
    if(k==0||head==NULL||head->next==NULL)
    {
        return head;
    }
    int len=1;
    ListNode*temp1=head;
    ListNode*temp=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
        len++;
    }
    if(k>len)
    {
        k=k%len;
    }
    k=len-k; //MAKING IT ANTICLOCKWISE
    if(k==0)
    {
        return head;
    }
    while(k-1!=0&&temp!=NULL)
    {
        temp=temp->next;
        k--;
    }
    if(temp==NULL)
    {
        return head;
    }
    temp1->next=head;
    head=temp->next;
    temp->next=NULL;
    return head;
}
