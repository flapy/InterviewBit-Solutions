/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> post;
vector<int > in;
int ind;
TreeNode *build(int low,int high)
{
    //cout<<low<<" "<<high<<endl;
    if(low==high)
        return new TreeNode(post[ind--]);
    if(low<high)
    {
        //cout<<"Here\n";
        int mid;
        int val=post[ind--];
        for(int i=low;i<=high;i++)
        {
            if(in[i]==val)
            {
                mid=i;
                break;
            }
        }
        TreeNode *root=new TreeNode(val);
        root->right=build(mid+1,high);
        root->left=build(low,mid-1);
        return root;
    }
    else
    {
        return NULL;
    }
        
}
TreeNode* Solution::buildTree(vector<int> &inorder, vector<int> &postorder) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    post=postorder;
    in=inorder;
    ind=inorder.size()-1;
    return build(0,inorder.size()-1);
}
