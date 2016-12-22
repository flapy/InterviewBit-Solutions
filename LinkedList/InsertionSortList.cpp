/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
    ListNode *newHead=NULL;
void reverse(ListNode *itr)
{
    if(itr->next==NULL)
    {
        newHead=itr;
        return ;
    }
    reverse(itr->next);
    ListNode *q=itr->next;
    q->next=itr;
    itr->next=NULL;
}
ListNode* Solution::insertionSortList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *head=A;
    vector<int> v;
    while(head!=NULL)
    {
        v.push_back(head->val);
        head=head->next;
    }
    sort(v.begin(),v.end());
    newHead=NULL;
    int l=v.size();
    for(int i=0;i<l;i++)
    {
        if(newHead==NULL)
        {
            newHead=new ListNode(v[i]);
        }
        else
        {
            ListNode *node=new ListNode(v[i]);
            node->next=newHead;
            newHead=node;
        }
    }
    reverse(newHead);
    return newHead;
}
