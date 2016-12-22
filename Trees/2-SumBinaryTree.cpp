int find(treenode *A,int v)
{
    if(A==NULL)
        return 0;
    if(A->val==v)
    {
        return 1;
    }
    if(v<A->val)
        return find(A->left,v);
    else
        return find(A->right,v);
}
int foo(treenode *A,int B,treenode *root)
{
    if(A==NULL)
        return 0;
    int val=A->val;
    int reqd=B-A->val;
    int ans=0;
    if(reqd!=val)
        ans=find(root,reqd);
    if(ans)
        return 1;
        
    return foo(A->left,B,root) || foo(A->right,B,root);
}
int t2Sum(treenode* A, int B) {
    return foo(A,B,A);
}