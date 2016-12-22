/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<int> a;
TreeNode *build(int low, int high)
{
    if(low==high)
    {
        return new TreeNode(a[low]);
    }
    if(low<high)
    {
        int mid=(low+high)/2;
        TreeNode *root=new TreeNode(a[mid]);
        root->left=build(low,mid-1);
        root->right=build(mid+1,high);
        return root;
    }
    else
        return NULL;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    a=A;
    return build(0,A.size()-1);
}
