int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int sum=0;
    int ans=0;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(A[i]>0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ans=A[i];
                continue;
            }
            ans=max(A[i],ans);
        }
        return ans;
    }
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(sum>ans)
        {
            ans=sum;
        }
        else if(sum<0)
        {
            sum=0;
        }
    }
    return ans;
}
