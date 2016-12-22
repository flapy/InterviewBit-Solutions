/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *build(vector <int> a,int low,int high)
{
    //cout<<low<<" "<<high<<endl;
    if(low==high)
        return new TreeNode(a[low]);
    if(low<high)
    {
        int ans=INT_MIN;
        int ind=-1;
        for(int i=low;i<=high;i++)
        {
            if(ans<a[i])
                ind=i;
            ans=max(ans,a[i]);
        }
        TreeNode *root=new TreeNode(ans);
        root->left=build(a,low,ind-1);
        root->right=build(a,ind+1,high);
        return root;
    }
    else
        return NULL;
}
TreeNode* Solution::buildTree(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details4
    return build(A,0,A.size()-1);
    
    
}
