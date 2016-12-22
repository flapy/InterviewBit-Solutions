#define lli long long int
lli getMin(vector<int> v,lli l)
{
    int ans=INT_MIN;
    for(int i=0;i<l;i++)
    {
        ans=max(ans,v[i]);
    }
    return ans;
}
lli getMax(vector<int> v,lli l)
{
    lli sum=0;
    for(int i=0;i<l;i++)
    {
        sum+=v[i];
    }
    return sum;
}
lli possible(lli mid,vector<int> v,lli l)
{
    lli ans=1;
    lli sum=0;
    for(int i=0;i<l;i++)
    {
        sum+=v[i];
        if(sum>mid)
            sum=v[i],ans++;
    }
    return ans;
}
int Solution::paint(int k, int t, vector<int> &C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<lli> v;
    lli l=C.size();
    lli lo=getMin(C,l);
    lli hi=getMax(C,l);
    lli ans=INT_MAX;
    while(lo<=hi)
    {
        lli mid=(lo+hi)/2;
        lli noOfPainters=possible(mid,C,l);
        if(noOfPainters<=k)
        {
            ans=min(ans,mid);
            hi=mid-1;
        }
        else if(noOfPainters>k)
        {
            lo=mid+1;
        }
    }
    return ((ans%10000003)*t)%10000003;
}
