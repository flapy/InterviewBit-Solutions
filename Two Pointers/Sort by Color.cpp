void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int cnt1,cnt0,cnt2;
    cnt0=cnt1=cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
            cnt0++;
        else if(A[i]==1)
            cnt1++;
        else
            cnt2++;
    }
    for(int i=0;i<cnt0;i++)
    {
        A[i]=0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++)
    {
        A[i]=1;
    }
    for(int i=cnt0+cnt1;i<cnt2+cnt1+cnt0;i++)
    {
        A[i]=2;
    }
}
