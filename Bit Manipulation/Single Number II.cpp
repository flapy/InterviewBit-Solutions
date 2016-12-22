int Solution::singleNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int pos=0;
    int count[32]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<32;j++)
        {
            if(A[i] & 1<<j)
            {
                count[j]++;
            }
        }
    }
    for(int i=0;i<32;i++)
        count[i]%=3;
    int ans=0;
    for(int i=0;i<32;i++)
    {
        if(count[i])
        {
            ans+=pow(2,i);
        }
    }
    return ans;
}
