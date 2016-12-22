vector<vector<int> > Solution::combine(int n, int k) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> A;
    for(int i=1;i<=n;i++)
    A.push_back(i);
    int tot=pow(2,n);
    set<vector<int> > ans;
    sort(A.begin(),A.end());
    for(int i=0;i<tot;i++)
    {
        vector<int> v;
        for(int j=0;j<n;j++)
        {
            if( i & 1<<j)
            {
                v.push_back(A[j]);
            }
        }
        if(v.size()==k)
        ans.insert(v);
    }
    set<vector<int> >::iterator itr;
    vector<vector<int> > v1;
    for(itr=ans.begin();itr!=ans.end();itr++)
    {
        v1.push_back(*itr);
    }
    return v1;
}
