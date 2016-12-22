#define lli long long int
int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==1 || A==0)
        return A;
    lli lo=1;
	lli hi=A;
	lli ans;
	lli num=A;
	while(lo<=hi)
	{
		lli mid=(lo+hi)/2;
		if(mid*mid==num)
		{
			return (int)mid;
		}
		if(mid*mid<A)
		{
			lo=mid+1;
			ans=mid;
		}
		else
		{
			hi=mid-1;
		}
	}
	return (int)ans;
}
