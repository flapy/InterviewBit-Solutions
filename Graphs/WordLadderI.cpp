bool foo(string s1,string s2)
{
    int cnt=0;
    int l=s1.length();
    for(int i=0;i<l;i++)
    {
        //cout<<s1[i]<<" "<<s2[i];
        if(s1[i]!=s2[i])
            cnt++;
        //cout<<endl;
    }
    //cout<<cnt<<endl;
    if(cnt>1)
        return false;
    return true;
}
int bfs(string start,string end,vector<string> v)
{
    queue<string> q;
    q.push(start);
    map<string,bool> m;
    m[start]=true;
    map<string,int> d;
    d[start]=0;
    int n=v.size();
    while(!q.empty())
    {
        string u=q.front();
        //cout<<u<<endl;
        q.pop();
        if(u==end)
        {
            return d[u]+1;
        }
        for(int i=0;i<n;i++)
        {
            if(!m[v[i]])
            {
                if(foo(v[i],u))
                {
                    //cout<<v[i]<<" ";
                    q.push(v[i]);
                    d[v[i]]=d[u]+1;
                    m[v[i]]=true;
                }
            }
        }
        // break;
    }
    return 0;
}
int Solution::ladderLength(string start, string end, vector<string> &dictV) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return bfs(start,end,dictV);
}
