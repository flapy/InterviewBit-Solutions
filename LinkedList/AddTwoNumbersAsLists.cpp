/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 struct ListNode *head=NULL;
 void reverse(ListNode * itr)
 {
     if(itr->next==NULL)
     {
         head=itr;
         return;
     }
     reverse(itr->next);
     struct ListNode * node=itr->next;
     node->next=itr;
     itr->next=NULL;
 }
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    struct ListNode* temp1=A;
    head=NULL;
    int len=0;
    while(temp1!=NULL)
    {
        len++;
        temp1=temp1->next;
    }
    struct ListNode *newNode=NULL;
    struct ListNode *headA=A;
    struct ListNode *headB=B;
    int carry=0;
    while(headA!=NULL && headB!=NULL)
    {
        int data=headA->val+headB->val+carry;
        int val=data%10;
        data/=10;
        carry=data%10;
        if(head==NULL)
        {
            head=new ListNode(val);
        }
        else
        {
            newNode=new ListNode(val);
            newNode->next=head;
            head=newNode;
        }
        headA=headA->next;
        headB=headB->next;
    }
    if(headA==NULL && headB==NULL)
    {
        if(carry)
        {
            newNode=new ListNode(carry);
            newNode->next=head;
            head=newNode;
        }
    }
    else
    {
        while(headA!=NULL)
        {
            int data=carry+headA->val;
            int val=data%10;
             data/=10;
            carry=data%10;
            newNode=new ListNode(val);
            newNode->next=head;
            head=newNode;
            headA=headA->next;
        }
        while(headB!=NULL)
        {
            int data=carry+headB->val;
            int val=data%10;
            data/=10;
            carry=data%10;
            newNode=new ListNode(val);
            newNode->next=head;
            head=newNode;
            headB=headB->next;
        }
        if(carry)
        {
            newNode=new ListNode(carry);
            newNode->next=head;
            head=newNode;
        }
    }
    struct ListNode *temp=head;
    while(temp!=NULL)
    {
        if(temp->val!=0)
        {
            break;
        }
        temp=temp->next;
    }
    head=temp;
    reverse(head);
    return head;
}
