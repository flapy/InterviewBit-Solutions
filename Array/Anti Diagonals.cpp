vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    bool flag[A.size()+2][A[0].size()+2];
    memset(flag,false,sizeof(flag));
    int n=A.size();
    int m=A[0].size();
    vector< vector<int> > ans;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            flag[i][j]=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            vector<int> v;
            if(!flag[i][j])
            {
                int k=i;
                int l=j;
                while(k<n && l>=0)
                {
                    flag[k][l]=true;
                    v.push_back(A[k][l]);
                    k++,l--;
                }
                ans.push_back(v);
            }
        }
    }
    return ans;
}
