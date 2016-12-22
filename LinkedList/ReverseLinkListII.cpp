/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *st,*en,*endNext;
void reverse(ListNode *itr)
{
    if(itr->next==endNext)
    {
        st=itr;
        return ;
    }
    reverse(itr->next);
    ListNode *q=itr->next;
    q->next=itr;
    itr->next=NULL;
}
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(n==m)
        return A;
    int cnt=0;
    ListNode *head=A;
    st=en=NULL;
    ListNode *prev=NULL;
    ListNode *stPrev=NULL;
    endNext=NULL;
    while(head!=NULL)
    {
        cnt++;
        if(cnt==m)
        {
            st=head;
            stPrev=prev;
        }
        if(cnt==n)
        {
            en=head;
        }
        prev=head;
        head=head->next;
    }
    ListNode *finalEnd=st;
    ListNode *finalSt=en;
    endNext=en->next;
    //cout<<st->val<<" "<<en->val<<" " <<endNext->val<<endl;
    reverse(st);
    finalEnd->next=endNext;
    if(stPrev!=NULL)
    stPrev->next=finalSt;
    if(m==1)
        A=st;
    return A;
}
