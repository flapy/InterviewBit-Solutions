int Solution::strStr(const string &haystack, const string &needle) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l1=haystack.length();
    int l2=needle.length();
    if(l1==0 || l2==0)
        return -1;
    for(int i=0;i<=l1-l2;i++)
    {
        bool flag=false;
        for(int j=0;j<l2;j++)
        {
            if(haystack[i+j]!=needle[j])
            {
                flag=true;
                break;
            }
        }
        if(!flag)
            return i;
    }
    return -1;
}
