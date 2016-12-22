int n;
int arr[100][100];
vector<vector<string> > ans;
bool isValid(int i,int j)
{
	if(arr[i][j])
		return false;
	for(int k=0;k<n;k++)
	{
		if(arr[i][k]==1)
			return false;
	}
	for(int k=0;k<n;k++)
	{
		if(arr[k][j]==1)
			return false;
	}
	int x=i;
	int y=j;
	while(x>=0 && y>=0)
	{
		if(arr[x][y])
			return false;
		x--,y--;
	}
	x=i;
	y=j;
	while(x>=0 && y<n)
	{
		if(arr[x][y])
			return false;
		x--,y++;
	}
	x=i;
	y=j;
	while(x<n && y>=0)
	{
		if(arr[x][y])
			return false;
		x++,y--;
	}
	x=i;
	y=j;
	while(x<n && y<n)
	{
		if(arr[x][y])
			return false;
		x++,y++;
	}
	return true;
}
void nQueen(int row)
{
	if(row>=n)
	{
	    vector<string> v;
	    for(int i=0;i<n;i++)
	    {
	        string s="";
	        for(int j=0;j<n;j++)
	        {
	            if(arr[i][j])
	                s+="Q";
	            else
	                s+=".";
	        }
	        v.push_back(s);
	    }
		ans.push_back(v);
	}
	for(int j=0;j<n;j++)
	{
		if(isValid(row,j))
		{
			arr[row][j]=1;
			nQueen(row+1);
			arr[row][j]=0;
		}
	}
}
vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    n=A;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            arr[i][j]=0;
    ans.clear();
    nQueen(0);
	return ans;
}
