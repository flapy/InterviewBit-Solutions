int Solution::knight(int N, int M, int x1, int y1, int x2, int y2) {
    // Do not write main() function.
    //Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   
    if(x2>N || y2>M)
        return -1;
    if(x1==x2 && y1==y2)
        return 0;
    queue<pair<int,int>  > q;
    q.push({x1,y1});
    map<int,map<int,bool> > vis;
    map<int,map<int,int> > d;
    
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=M;j++)
        {
            vis[i][j]=false;
            d[i][j]=0;
        }
    }
    vis[x1][y1]=true;
    d[x1][y1]=0;
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        int x=p.first;
        int y=p.second;
        if(x==x2 && y==y2)
            break;
        q.pop();
        if(x-1>=1 && y+2<=M && !vis[x-1][y+2])
        {
            vis[x-1][y+2]=true;
            q.push({x-1,y+2});
            d[x-1][y+2]=d[x][y]+1;
            // if(x-1==x2 && y+2==y2)
            //     break;
        }
        if(x-2>=1 && y+1<=M && !vis[x-2][y+1])
        {
            vis[x-2][y+1]=true;
            q.push({x-2,y+1});
            d[x-2][y+1]=d[x][y]+1;
            // if(x-2==x2 && y+1==y2)
            //     break;
        }
        if(x-2>=1 && y-1>=1 && !vis[x-2][y-1])
        {
            vis[x-2][y-1]=true;
            q.push({x-2,y-1});
            d[x-2][y-1]=d[x][y]+1;
            // if(x-2==x2 && y-1==y2)
            //     break;
        }
        if(x-1>=1 && y-2>=1 && !vis[x-1][y-2])
        {
            vis[x-1][y-2]=true;
            q.push({x-1,y-2});
            d[x-1][y-2]=d[x][y]+1;
            // if(x-1==x2 && y-2==y2)
            //     break;
        }
        if(x+1<=N && y-2>=1 && !vis[x+1][y-2])
        {
            vis[x+1][y-2]=true;
            q.push({x+1,y-2});
            d[x+1][y-2]=d[x][y]+1;
            // if(x+1==x2 && y-2==y2)
            //     break;
        }
        if(x+2<=N && y-1>=1 && !vis[x+2][y-1])
        {
            vis[x+2][y-1]=true;
            q.push({x+2,y-1});
            d[x+2][y-1]=d[x][y]+1;
            // if(x+2==x2 && y-1==y2)
            //     break;
        }
        if(x+2<=N && y+1<=M && !vis[x+2][y+1])
        {
            vis[x+2][y+1]=true;
            q.push({x+2,y+1});
            d[x+2][y+1]=d[x][y]+1;
            // if(x+2==x2 && y+1==y2)
            //     break;
        }
        if(x+1<=N && y+2<=M && !vis[x+1][y+2])
        {
            vis[x+1][y+2]=true;
            q.push({x+1,y+2});
            d[x+1][y+2]=d[x][y]+1;
            // if(x+1==x2 && y+2==y2)
            //     break;
        }
    }
    return (d[x2][y2]?d[x2][y2]:-1);
}