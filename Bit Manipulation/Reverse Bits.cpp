unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string str="";
    for(int i=0;i<32;i++)
    {
        if(A & (1<<i))
        {
            str+="1";
        }
        else
            str+="0";
    }
    //cout<<str<<endl;
    int ans=0;
    int l=str.length();
    int cnt=l-1;
    for(int i=0;i<l;i++)
    {
        ans+=(str[i]=='0'?0:pow(2,cnt));
        cnt--;
    }
    return ans;
}
