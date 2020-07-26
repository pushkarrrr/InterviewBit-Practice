/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* head) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode*slow=head;
    ListNode*fast=head;
    bool cycle=false;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            cycle=true;
            break;
        }
    }
    if(cycle==false)
    {
        return NULL;
    }
    slow=head;
    while(fast!=slow)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return fast;
    
}
