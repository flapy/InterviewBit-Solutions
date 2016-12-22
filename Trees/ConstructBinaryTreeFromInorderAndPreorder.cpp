/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int ind=0;
vector<int> pre,in;
TreeNode *build(int low,int high)
{
    //cout<<low<<" "<<high<<endl;
    if(low==high)
        return new TreeNode(pre[ind++]);
    if(low<high)
    {
        //cout<<"Here\n";
        int mid;
        int val=pre[ind++];
        for(int i=low;i<=high;i++)
        {
            if(in[i]==val)
            {
                mid=i;
                break;
            }
        }
        
        TreeNode *root=new TreeNode(val);
        root->left=build(low,mid-1);
        root->right=build(mid+1,high);
        return root;
    }
    else
    {
        return NULL;
    }
        
}
TreeNode* Solution::buildTree(vector<int> &preorder, vector<int> &inorder) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ind=0;
    pre=preorder;
    in=inorder;
    return build(0,inorder.size()-1);
}
