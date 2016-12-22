int aToI(string s,bool flag)
{
    int l=s.length();
    long long int num=0;
    long long int mul=1;
    if(s.length()>=10)
    {
        if(flag)
            return INT_MAX;
        else
            return INT_MIN;
    }
    for(int i=l-1;i>=0;i--)
    {
        num+=((s[i]-48)*(mul));
        mul*=10;
        if(flag)
            if(num>(long long)INT_MAX)
                return INT_MAX;
        else
            if(num>(long long)INT_MIN*(long long )(-1))
                return INT_MIN;
    }
    
    return flag?(int)num:(int)num*-1;
}
int Solution::atoi(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string s="";
    int l=A.length();
    int i=0;
    bool flag=true;
    while(A[i]==' ' && i<l)
        i++;
    if(A[i]=='-')
    {
        i++;
        flag=false;
    }
    if(A[i]=='+')
        i++;
    for(;i<l;i++)
    {
        if(isdigit(A[i]))
        {
            s+=(char)A[i];
        }
        else
            break;
    }

    if(!s.length())
    return 0;
    return aToI(s,flag);
}
