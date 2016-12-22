/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *head,*headNew;
void reverse(ListNode *itr)
{
     if(itr->next==NULL)
     {
         head=itr;
         return ;
     }
     reverse(itr->next);
     ListNode *q=itr->next;
     q->next=itr;
     itr->next=NULL;
}
ListNode* Solution::reorderList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    head=A;
    ListNode *slow,*fast;
    slow=head;
    fast=head;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode *mid=slow;
    reverse(mid);
    ListNode *tempA=A;
    ListNode *tempB=head;
    bool flag=true;
    ListNode *newList=NULL;
    while(tempA!=NULL && tempA!=mid && tempB!=NULL)
    {
        if(flag)
        {
            //cout<<tempA->val<<" -> ";
            ListNode *node;
            if(newList==NULL)
            {
                node=new ListNode(tempA->val);
                newList=node;
            }
            else
            {
                node=new ListNode(tempA->val);
                node->next=newList;
                newList=node;
            }
            flag=false;
            tempA=tempA->next;
        }
        else
        {
            //cout<<tempB->val<<" -> ";
            flag=true;
            ListNode *node;
            node=new ListNode(tempB->val);
            node->next=newList;
            newList=node;
            tempB=tempB->next;
        }
    }
    while(tempA!=NULL && tempA!=mid)
    {
        ListNode *node=new ListNode(tempA->val);
        node->next=newList;
        newList=node;
        tempA=tempA->next;
    }
    while(tempB!=NULL)
    {
        ListNode *node=new ListNode(tempB->val);
        node->next=newList;
        newList=node;
        tempB=tempB->next;
    }
    reverse(newList);

    return head;
}
