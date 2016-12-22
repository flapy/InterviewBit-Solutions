vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int n=A.size();
    long long int sum1=0,sum2=0;
    long long int net1=((long long int)n*((long long int)n+1))/2;
    for(int i=0;i<n;i++)
    {
        sum1+=(long long int)A[i];
        sum2+=((long long int)A[i]*(long long int)A[i]);
    }
    long long int net2=((long long int)n*((long long int)n+1)*(2*(long long int)n+1))/6;
    long long int dif1=net1-sum1;
    long long int dif2=net2-sum2;
    vector<int> ans;
        ans.push_back((dif2/dif1 - dif1)/2);

    ans.push_back((dif2/dif1 + dif1)/2);
    return ans;
}
