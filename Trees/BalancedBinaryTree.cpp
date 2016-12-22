/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool flag=true;
int foo(TreeNode *root)
{
    if(root==NULL)
        return 0;
    //cout<<root->val<<endl;
    int left=foo(root->left)+1;
    int right=foo(root->right)+1;
    //cout<<left<<" "<<right<<endl;
    if(max(left,right)-min(left,right)>1)
        flag=false;
    return max(left,right);
    
}
int Solution::isBalanced(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    flag=true;
    foo(A);
    return flag;
}
