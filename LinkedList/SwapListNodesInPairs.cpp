/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==NULL || A->next==NULL)
    {
        return A;
    }
    ListNode *thirdElement=A->next->next;
    A->next->next=A;
    ListNode *node=A->next;
    A->next=swapPairs(thirdElement);
    return node;
}
