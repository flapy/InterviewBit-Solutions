/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    ListNode *head=A,*prev;
    int cnt=0;
    while(head!=NULL)
    {
        if(cnt==0)
        {
            prev=head;
            cnt++;
        }
        else
        {
            while(head!=NULL && prev->val==head->val)
            {
                head=head->next;
            }
            prev->next=head;
            prev=head;
        }
        if(head!=NULL)
        head=head->next;
    }
    return A;
}

