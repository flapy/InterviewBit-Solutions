/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *last=NULL;
int foo(TreeNode *A,int sum,int pathSum)
{
    //cout<<pathSum<<endl;
    if(A==NULL)
    {
        if(pathSum==sum && last && last->left==NULL && last->right==NULL)
        {
            return 1;
        }
        return 0;
    }
    pathSum+=A->val;
    if(pathSum==sum)
        last=A;
    return foo(A->left,sum,pathSum) || foo(A->right,sum,pathSum);
}
int Solution::hasPathSum(TreeNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return foo(A,B,0);
}
