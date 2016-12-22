vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int tot=pow(2,n);
    set<vector<int> > ans;
    sort(A.begin(),A.end());
    for(int i=0;i<tot;i++)
    {
        vector<int> v;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if( i & 1<<j)
            {
                sum+=A[j];
                v.push_back(A[j]);
            }
        }
        if(sum==B)
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
