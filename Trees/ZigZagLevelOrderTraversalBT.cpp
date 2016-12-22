/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    stack<TreeNode*> cur;
    stack<TreeNode*> next;
    cur.push(A);
    int lev=1;
    vector<vector<int> >ans;
    vector<int>v;
    while(!cur.empty())
    {
        TreeNode *temp=cur.top();
        //cout<<temp->val<<endl;
        v.push_back(temp->val);
        cur.pop();
        if(lev%2)
        {
            if(temp->left)
                next.push(temp->left);
            if(temp->right)
                next.push(temp->right);
        }
        else
        {
            if(temp->right)
                next.push(temp->right);
            if(temp->left)
                next.push(temp->left);
        }
        if(cur.empty())
        {
            ans.push_back(v);
            v.clear();
            cur=next;
            stack<TreeNode*> s;
            lev++;
            next=s;
        }
    }
    return ans;
}
