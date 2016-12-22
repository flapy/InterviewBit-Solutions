/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool order1(TreeNode *itr,TreeNode *itr1)
{
    if(!itr && !itr1)
        return true;
    if(itr && itr1 && itr->val == itr1->val)
        return order1(itr->left, itr1->right) &&  order1(itr->right, itr1->left);
    return false;
}
int Solution::isSymmetric(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return order1(A,A)?1:0;
}
