/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *findLca(TreeNode *root,int val1,int val2)
{
    if(!root)
        return NULL;
    if(root->val==val1)
        return root;
    if(root->val==val2)
        return root;
    TreeNode *left=findLca(root->left,val1,val2);
    TreeNode *right=findLca(root->right,val1,val2);
    if(left!=NULL && right!=NULL)
        return root;
    else if(left)
        return left;
    else if(right)
        return right;
    else
        return NULL;
}
bool flag=false;
void find(TreeNode *root,int val)
{
    if(!root)
        return ;
    if(root->val==val)
        flag= true;
    find(root->left,val);
    find(root->right,val);
}
int Solution::lca(TreeNode* A, int val1, int val2) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    TreeNode *check;
    flag=false;
    find(A,val1);
    if(!flag)
        return -1;
    flag=false;
    find(A,val2);
    if(!flag)
        return -1;
    return findLca(A,val1,val2)->val;
}
