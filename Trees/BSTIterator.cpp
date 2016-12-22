/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
map<int, int> m;
int ind=0;
int cnt=0;
void storeHeight(TreeNode *root);
BSTIterator::BSTIterator(TreeNode *root) {
    cnt=0;
    ind=0;
    storeHeight(root);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(cnt==ind)
        return false;
    return true;
}
void storeHeight(TreeNode *root)
{
    if(root)
    {
        storeHeight(root->left);
                m[ind++]=root->val;

        storeHeight(root->right);
    }
    return ;
}
/** @return the next smallest number */
int BSTIterator::next() {
    return m[cnt++];
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
