string foo(string temp)
{
    string ans=temp;
    string t="";
    for(int i=0;i<ans.length();i++)
    {
        int cnt=1;
        int pos=i;
        while(i<ans.length()-1 && ans[i]==ans[i+1])
        {
            cnt++;
            i++;
        }
        t+=(char)(cnt+48);
        t+=ans[pos];
    }
    return t;
}

string Solution::countAndSay(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int cnt=1;
    string term="1";
    int n=A;
    while(cnt<n)
    {
        cnt++;
        term=foo(term);
    }
    return term;
}
