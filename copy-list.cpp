//in O(1) Space Complexity
/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* head) {
    if(head==NULL)
    {
        return NULL;
    }
    RandomListNode*temp=head;
    //1st pass - map links
    while(temp!=NULL)
    {
        RandomListNode*curr=new RandomListNode(temp->label);
        curr->next=temp->next;
        temp->next=curr;
        temp=curr->next;
    }
    temp=head;
    //2nd pass - assign random
    while(temp!=NULL)
    {
        if(temp->random==NULL) //check 1
        {
            temp->next->random=NULL;
        }
        else
        {
        temp->next->random=temp->random->next;
        }
        temp=temp->next->naext;
    }
    //3rd pass - assign next
    temp=head;
    RandomListNode*newhead=temp->next;
    RandomListNode*curr=newhead;
    while(temp!=NULL)
    {
        temp->next=temp->next->next;
        temp=temp->next;
         if(curr->next==NULL) //check 2
        {
            break;
        }
        curr->next=curr->next->next;
        curr=curr->next;
    }
    return newhead;
}
