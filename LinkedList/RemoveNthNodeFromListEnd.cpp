/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode * temp=A;
    int len=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    if(B>=len)
    {
        return A->next;
    }
    int diff=len-B;
    temp=A;
    int cnt=0;
    ListNode *cur=temp,*next=cur->next;
    while(temp!=NULL)
    {
        if(cnt==diff)
        {
            break;
        }
        cur=temp;
        next=temp->next;
        temp=temp->next;
        cnt++;
    }
    if(cur->next!=NULL)
    {
        cur->next=cur->next->next;
    }
    else
    {
        cur->next=NULL;
    }
    return A;
    
}
