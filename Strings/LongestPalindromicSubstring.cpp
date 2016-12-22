pair<int,pair<int,int> > findPalin(int i,int j,string s)
{
    int ans=0;
    int l=s.length();
    while(i>=0 && j<l && s[i]==s[j] )
    {
        ans=j-i+1;
        i--;
        j++;
    }
    return {ans,{i+1,j-1}};
}
string Solution::longestPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.length();
    int ans=INT_MIN;
    int st=0,end=0;
    for(int i=1;i<n;i++)
    {
        pair<int,pair<int,int> >  p=findPalin(i-1,i,A);
        int maxEven=p.first;
        if(ans<maxEven)
        {
            st=p.second.first;
            end=p.second.second;
            ans=maxEven;
        }
        if(i+1<n)
        {
            pair<int,pair<int,int> > p=findPalin(i-1,i+1,A);
            int maxOdd=p.first;
            if(ans<maxOdd)
            {
                st=p.second.first;
                end=p.second.second;    
                ans=maxOdd;
            }
        }
    }
    string str="";
    for(int k=st;k<=end;k++)
        str+=A[k];
    if(str=="")
    {
        string temp="";
        temp+=A[0];
        return temp;
    }
    return str;
}
