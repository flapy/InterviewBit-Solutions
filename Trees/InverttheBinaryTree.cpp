/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void mirror(TreeNode *root)
{
    if(root==NULL)
        return ;
    mirror(root->left);
    mirror(root->right);
    TreeNode *temp=root->left;
    root->left=root->right;
    root->right=temp;
}
TreeNode* Solution::invertTree(TreeNode* root) {
    mirror(root);
    return root;
}
