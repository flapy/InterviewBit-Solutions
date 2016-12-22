bool vis[10004][1004]={false};
char str[10004][1004];
int Solution::black(vector<string> &A) {
    // Do not write main() function.
    //Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    /*
        Simply Counting the number of Connected Components
    */
    int n=A.size();
    int m;
    for(int i=0;i<n;i++)
    {
        m=A[i].length();
        string s=A[i];
        for(int j=0;j<m;j++)
        {
            str[i][j]=s[j];
            vis[i][j]=false;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j] && str[i][j]=='X')
            {
                vis[i][j]=true;
                cnt++;
                queue<pair<int,int> > q;
                q.push({i,j});
                while(!q.empty())
                {
                    pair<int,int> u=q.front();
                    q.pop();
                    int x=u.first;
                    int y=u.second;
                    if(x<n && !vis[x+1][y] && str[x+1][y]=='X')
                    {
                        vis[x+1][y]=true;
                        q.push({x+1,y});
                    }
                    if(x>=0 && !vis[x-1][y] && str[x-1][y]=='X')
                    {
                        vis[x-1][y]=true;
                        q.push({x-1,y});
                    }
                    if(y<m && !vis[x][y+1] && str[x][y+1]=='X')
                    {
                        vis[x][y+1]=true;
                        q.push({x,y+1});
                    }
                    if(y>=0 && !vis[x][y-1] && str[x][y-1]=='X')
                    {
                        vis[x][y-1]=true;
                        q.push({x,y-1});
                    }
                }
            }
        }
    }
    return cnt;
}
