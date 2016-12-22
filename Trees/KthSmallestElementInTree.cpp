/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int arr[100004];
int ans=0;
int cnt=0;
void inorder(TreeNode *itr,int k)
{
    if(itr==NULL)
        return ;
    inorder(itr->left,k);
    cnt++;
    if(cnt==k)
    {
        ans=itr->val;
        return ;
    }
    inorder(itr->right,k);
}
int Solution::kthsmallest(TreeNode* root, int k) {
    cnt=0;
    ans=0;
    inorder(root,k);
    return ans;
}
