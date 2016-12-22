/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::sortList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> v;
    ListNode *head=A;
    while(head!=NULL)
    {
        v.push_back(head->val);
        head=head->next;
    }
    sort(v.begin(),v.end());
    int l=v.size();
    ListNode *cons=A;
    for(int i=0;i<l;i++)
    {
        A->val=v[i];
        A=A->next;
    }
    return cons;
}
