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
vector<vector<int> > ans; 
int v[100004];
void add(int temp[],int n)
{
    vector<int> ret;
    for(int i=0;i<n;i++)
        ret.push_back(temp[i]);
    ans.push_back(ret);
}
void foo(TreeNode *root,int sum,int pathSum,int cnt)
{
    if(root==NULL)
    {
        if(pathSum==sum && last &&last->right==NULL && last->left==NULL)
        {
           add(v,cnt);
           last=NULL;
        }
        return ;
    }
    v[cnt++]=root->val;
    pathSum+=root->val;
    if(pathSum==sum)
        last=root;
    foo(root->left,sum,pathSum,cnt);
    foo(root->right,sum,pathSum,cnt);

}
vector<vector<int> > Solution::pathSum(TreeNode* root, int sum) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ans.clear();
    foo(root,sum,0,0);
    return ans;
    
}
