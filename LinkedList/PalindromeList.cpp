/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode *he=NULL;
void reverse(struct ListNode * itr)
{
    if(itr->next==NULL)
    {
        he=itr;
        return ;
    }
    reverse(itr->next);
    ListNode *q=itr->next;
    q->next=itr;
    itr->next=NULL;
}
int Solution::lPalin(ListNode* A) {
    if(A->next==NULL)
        return 1;
    struct ListNode *head=A;
    struct ListNode *slowPtr=A;
    struct ListNode *fastPtr=A;
    he=NULL;
    while(slowPtr!=NULL && fastPtr!=NULL && fastPtr->next!=NULL)
    {
        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next->next;
    }
    ListNode *part2=NULL;
    bool even=false;
    if(fastPtr==NULL)
    {
        part2=slowPtr;even=true;
    }
    else
        part2=slowPtr->next;
    reverse(part2);
    ListNode *headA=A;
    ListNode *headB=he;
    while(headB!=NULL)
    {
        if(headA->val!=headB->val)
            return 0;
        headA=headA->next;
        headB=headB->next;
    }
    return 1;
}
