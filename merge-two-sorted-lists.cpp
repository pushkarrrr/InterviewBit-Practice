/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    if(A==NULL)
    {
        return B;
    }
    if(B==NULL)
    {
        return A;
    }
    ListNode*c;
    if(A->val<=B->val)
    {
        c=A;
        c->next=mergeTwoLists(A->next,B);
    }
    else
    {
        c=B;
        c->next=mergeTwoLists(A,B->next);
    }
    return c;
}
