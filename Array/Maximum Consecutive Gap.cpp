int Solution::maximumGap(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    if(n<2)
        return 0;
    vector<int> v=A;
    sort(v.begin(),v.end());
    int ans=INT_MIN;
    for(int i=1;i<n;i++)
    {
        ans=max(ans,v[i]-v[i-1]);
    }
    return ans;
}
