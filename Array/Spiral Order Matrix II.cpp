vector<vector<int> > Solution::generateMatrix(int a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=0;
	int r=a-1;
	int u=0;
	int d=a-1;
	int cnt=0;
	int m=1;
	int A[a+2][a+2];
	while(l<=r && u<=d)
	{
	    if(cnt==0)
	    {
	        for(int i=l;i<=r;i++)
	        {
	            A[u][i]=m++;
	        }
            u++;
	        cnt=(cnt+1)%4;
	    }
	    else if(cnt==1)
	    {
	        for(int i=u;i<=d;i++)
	        {
	            A[i][r]=m++;
	        }
	        r--;
	        cnt=(cnt+1)%4;
	    }
	    else if(cnt==2)
	    {
	        for(int i=r;i>=l;i--)
	        {
	            A[d][i]=m++;;
	        }
	        d--;
	        cnt=(cnt+1)%4;
	    }
	    else
	    {
	        for(int i=d;i>=u;i--)
	        {
	           A[i][l]=m++;
	        }
	        l++;
	        cnt=(cnt+1)%4;
	    }
	}
	
	vector<vector<int> > v;
	for(int i=0;i<a;i++)
	{
	    vector<int> temp;
	    for(int j=0;j<a;j++)
	    {
	        temp.push_back(A[i][j]);
	    }
	    v.push_back(temp);
	}
	return v;
}
