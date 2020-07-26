/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct cmp
{
    bool operator() (ListNode*a,ListNode*b) 
    {
        return a->val>b->val;
    }
};
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    priority_queue<ListNode*,vector<ListNode*>,cmp>pq;
    for(int i=0;i<A.size();i++)
    {
        // if(A[i]!=NULL)
        pq.push(A[i]);
    }
    ListNode*head=NULL;
    ListNode*curr=NULL;
    while(!pq.empty())
    {
        ListNode*temp=pq.top();
        pq.pop();
        if(head==NULL)
        {
            head=temp;
            curr=temp;
        }
        else
        {
            curr->next=temp;
            curr=temp;
        }
        if(temp->next!=NULL)
        {
            pq.push(temp->next);
        }
    }
    return head;
}
