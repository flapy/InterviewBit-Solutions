int n,m;
char v[1004][1004];
bool vis[1004][1004];
string s;
bool flag=0;
void dfs(int x,int y,int cnt,string str)
{
    if(flag)
        return ;
    if(str==s)
    {
        flag=1;
        return ;
    }
    ///cout<<x<<" "<<y<<" "<<str<<endl;
    string temp="";
    if(x+1<n && s[cnt]==v[x+1][y])
    {
        temp=str+v[x+1][y];
        dfs(x+1,y,cnt+1,temp);
    }
    if(x-1>=0 && s[cnt]==v[x-1][y])
    {
        temp=str+v[x-1][y];
        dfs(x-1,y,cnt+1,temp);
    }
    if( y+1<m && s[cnt]==v[x][y+1])
    {
        temp=str+v[x][y+1];
        dfs(x,y+1,cnt+1,temp);
    }
    if(y-1>=0 && s[cnt]==v[x][y-1])
    {
        temp=str+v[x][y-1];
        dfs(x,y-1,cnt+1,temp);
    }
}
int Solution::exist(vector<string> &A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    s=B;
    flag=0;
    n=A.size();
    for(int i=0;i<n;i++)
    {
        m=A[i].size();
        string str=A[i];
        for(int j=0;j<m;j++)
        {
            v[i][j]=str[j];
            vis[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==B[0])
            {
                string str="";
                str+=(char)v[i][j];
                dfs(i,j,1,str);
                if(flag==1)
                    return 1;
            }
        }
        //cout<<endl;
    }
    return 0;
}
