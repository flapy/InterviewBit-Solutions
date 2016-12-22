/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *headNew=NULL;
void reverse(ListNode *itr)
{
    if(itr->next==NULL)
    {
        headNew=itr;
        return;
    }
    reverse(itr->next);
    ListNode *q=itr->next;
    q->next=itr;
    itr->next=NULL;
}
ListNode* Solution::partition(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    headNew=NULL;
    ListNode *head=A;
    int x=B;
    while(head!=NULL)
    {
        if((head->val)<x)
        {
            //cout<<head->val<<endl;
            if(headNew==NULL)
            {
                headNew=new ListNode(head->val);
            }
            else
            {
                ListNode *newNode=new ListNode(head->val);
                newNode->next=headNew;
                headNew=newNode;
            }
        }
        head=head->next;
    }
    head=A;
    while(head!=NULL)
    {
        if(head->val>=x)
        {
            if(headNew==NULL)
            {
                headNew=new ListNode(head->val);
            }
            else
            {
                ListNode *newNode=new ListNode(head->val);
                newNode->next=headNew;
                headNew=newNode;
            }
        }
        head=head->next;
    }
    reverse(headNew);
    return headNew;
}
