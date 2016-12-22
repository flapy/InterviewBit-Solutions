vector<vector<int> > Solution::subsets(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int> > v;
    int n=A.size();
    int to=pow(2,n);
    sort(A.begin(),A.end());
    for(int i=0;i<to;i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            if(i & 1<<j)
            {
                temp.push_back(A[j]);
            }
        }
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    return v;
}
