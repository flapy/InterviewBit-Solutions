int Solution::isPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string s="";
    int l=A.length();
    for(int i=0;i<l;i++)
    {
        if(isalpha(A[i]))
           s+=tolower(A[i]);
        if(isdigit(A[i]))
          s+=A[i];
    }
    //cout<<s<<endl;
    l=s.length();
    int i=0;
    l--;
    while(i<l)
    {
        if((s[i])!=(s[l]))
        {
            return 0;
        }
        i++;l--;
    }
    return 1;
}
