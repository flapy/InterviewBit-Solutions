/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> ans;
int previous;
void recover(TreeNode *A)
{
    if(!A)
        return ;
    recover(A->left);
    if(previous==INT_MIN)
    {
        previous=A->val;
    }
    else
    {
        if(A->val<previous)
        {
            ans.push_back(previous);
            ans.push_back(A->val);
        }
        previous=A->val;
    }
    recover(A->right);
}
vector<int> Solution::recoverTree(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ans.clear();
    previous=INT_MIN;
    recover(A);
    if(ans.size()==2)
    {
        sort(ans.begin(),ans.end());
        return ans;
    }
    else
    {
        vector<int> v=ans;
        int n=v.size();
        sort(v.begin(),v.end());
        vector<int> v1;
        for(int i=0;i<n;i++)
        {
            //cout<<v[i]<<" "<<ans[i]<<endl;
            if(v[i]!=ans[i])
            {
                v1.push_back(v[i]);
            }
        }
         sort(v1.begin(),v1.end());
         return v1;
    }
}
