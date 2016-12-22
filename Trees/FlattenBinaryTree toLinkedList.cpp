/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode *arr[1000004];
 int cnt,ans;
void build(TreeNode * A)
{
    if(!A)  
        return ;
    arr[cnt++]=A;
    build(A->left);
    build(A->right);
}
void makeTree(TreeNode *A)
{
    if(!A)
        return ;
    TreeNode *left=A->left;
    TreeNode *right=A->right;
    ans++;
    if(ans!=cnt)
        A->right=arr[ans];
    else
        A->right=NULL;
    A->left=NULL;
    makeTree(left);
    makeTree(right);
}
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ans=cnt=0;
    build(A);
    //     for(int i=0;i<cnt;i++)
    //     cout<<arr[i]->val<<" ";
    // cout<<endl;

    makeTree(A);
    return A;
}
