/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #define lli long long int
lli ans=0;
int toi(string s)
{
    int l = s.length();
    reverse(s.begin(),s.end());
    int ans1=0;
    int mul=1;
    for(int i=0;i<l;i++)
    {
        ans1+=(mul*(s[i]-48))%1003;
        mul=(mul*10)%1003;
    }
    return ans1%1003;
}
void calc(string s)
{
    ans=(ans+(toi(s)))%1003;
}
void foo(TreeNode *A,string str)
{
    if(!A)
        return ;
    if(A->left==NULL && A->right==NULL)
    {
        str+=to_string(A->val);
        calc(str);
        return ;
    }
    str+=to_string(A->val);
    foo(A->left,str);
    foo(A->right,str);
}
int Solution::sumNumbers(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ans=0;
    foo(A,"");
    return ans;
}
