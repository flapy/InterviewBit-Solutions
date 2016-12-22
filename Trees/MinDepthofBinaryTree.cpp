/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    queue<pair<TreeNode *,int> >q;
    q.push({A,1});
    while(!q.empty())
    {
        pair<TreeNode *,int> p=q.front();
        q.pop();
        int depth=p.second;
        TreeNode *temp=p.first;
        if(temp->right==NULL && temp->left==NULL)
            return depth;
        if(temp->right)
            q.push({temp->right,depth+1});
        if(temp->left)
            q.push({temp->left,depth+1});
    }
    return 0;
}
