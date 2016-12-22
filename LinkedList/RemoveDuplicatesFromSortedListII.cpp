/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *ret=NULL;
void reverse(ListNode *itr)
{
    if(itr->next==NULL)
    {
        ret=itr;
        return ;
    }
    reverse(itr->next);
    ListNode *q=itr->next;
    q->next=itr;
    itr->next=NULL;
}
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    map<int,int> m;
    ret=NULL;
    ListNode *head=A;
    while(head!=NULL)
    {
        m[head->val]++;
        head=head->next;
    }
    head=A;
    ListNode *newHead=NULL;
    while(head!=NULL)
    {
        if(m[head->val]==1)
        {
            if(newHead==NULL)
            {
                newHead=new ListNode(head->val);
            }
            else
            {
                ListNode *node=new ListNode(head->val);
                node->next=newHead;
                newHead=node;
            }
        }
        head=head->next;
    }
    if(newHead)
    reverse(newHead);
    return ret;
}
