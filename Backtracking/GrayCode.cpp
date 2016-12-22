int binarytoInt(string s)
{
    int l=s.length();
    int mul=1;
    int ans=0;
    for(int i=l-1;i>=0;i--)
    {
        ans+=((s[i]-48)*mul);
        mul*=2;
    }
    return ans;
}
vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
       queue<string> q;
    string str="";
    for(int i=0;i<A;i++)
        str+="0";
    q.push(str);
    map<string,bool> m;
    m[str]=true;
    vector<int> ans;
    while(!q.empty())
    {
        string u=q.front();
        ans.push_back(binarytoInt(u));
        q.pop();
        int l=u.length();
        string temp=u;
        for(int i=0;i<l;i++)
        {
            if(u[i]=='0')
            {
                temp[i]='1';
                if(!m[temp])
                {
                    q.push(temp);
                    m[temp]=true;
                    break;
                }
                temp[i]='0';
            }
            else
            {
                temp[i]='0';
                if(!m[temp])
                {
                    q.push(temp);
                    m[temp]=true;
                    break;
                }
                temp[i]='1';
            }
        }
    }
    return ans;
}
