/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
TreeNode* build(int arr[],int low,int high)
{
    if(low>high)
        return NULL;
    else if(low==high)
    {
        TreeNode *root=new TreeNode(arr[low]);
        return root;
    }
    else
    {
        int mid=(low+high)/2;
        TreeNode *root=new TreeNode(arr[mid]);
        root->left=build(arr,low,mid-1);
        root->right=build(arr,mid+1,high);
        return root;
    }
}
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int arr[100004];
    ListNode *head=A;
    int index=0;
    while(head!=NULL)
    {
        arr[index++]=head->val;
        head=head->next;
    }
    int n=index;
    return build(arr,0,n-1);
}
