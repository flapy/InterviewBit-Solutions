void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=A.length();
    string s="";
    bool last=false;
    string ans="";
    for(int i=0;i<l;i++)
    {
        if(A[i]==' ')
        {
            while(A[i]==' ')
            {
                i++;
            }
            reverse(s,s+s.length());
            last=true;
            ans=ans+s+" ";
            s="";
            i--;
        }
        else
        {
            s+=A[i];
            last=false;
        }
    }
    if(!last)
    {
        reverse(s,s+s.length());
        ans=ans+s;
    }    
    else
    {
        int l=ans.length();
        for(int i=l-1;i>=0;i--)
        {
            if(ans[i]!=' ')
                break;
            ans[i]='';
        }
        
    }
}
