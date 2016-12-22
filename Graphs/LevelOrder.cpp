/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    queue<TreeNode *> q;
    vector<vector<int> > ans; 
    map<int,int> d;
    q.push(A);
    q.push(NULL);
    vector<int> v;
    while(!q.empty())
    {
        TreeNode *front=q.front();
        q.pop();
        if(front!=NULL)
        {
            v.push_back(front->val);
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);

        }
        else
        {
            ans.push_back(v);
            v.clear();
            if(!q.empty())
                q.push(NULL);
        }
    }
    return ans;
}
