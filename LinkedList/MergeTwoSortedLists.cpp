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
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *headA=A;
    ListNode *headB=B;
    headNew=NULL;
    while(headA!=NULL && headB!=NULL)
    {
        int e1=headA->val;
        int e2=headB->val;
        if(e1<=e2)
        {
            if(headNew==NULL)
            {
                headNew=new ListNode(e1);
            }
            else
            {
                ListNode *newNode=new ListNode(e1);
                newNode->next=headNew;
                headNew=newNode;
            }
                    headA=headA->next;

        }
        else
        {
            if(headNew==NULL)
            {
                headNew=new ListNode(e2);
            }
            else
            {
                ListNode *newNode=new ListNode(e2);
                newNode->next=headNew;
                headNew=newNode;
            }
                    headB=headB->next;
        }
    }
    while(headA!=NULL)
    {
        int e1=headA->val;
        if(headNew==NULL)
        {
            headNew=new ListNode(e1);
        }
        else
        {
            ListNode *newNode=new ListNode(e1);
            newNode->next=headNew;
            headNew=newNode;
        }
        headA=headA->next;
    }
     while(headB!=NULL)
    {
        int e1=headB->val;
        if(headNew==NULL)
        {
            headNew=new ListNode(e1);
        }
        else
        {
            ListNode *newNode=new ListNode(e1);
            newNode->next=headNew;
            headNew=newNode;
        }
        headB=headB->next;
    }
    reverse(headNew);
    return headNew;
}
