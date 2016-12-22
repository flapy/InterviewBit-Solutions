int n,arr[100][100];
bool isValid(int i,int j,int val)
{
	int iSt=i-i%3;
	int jSt=j-j%3;
	for(int l=iSt;l<iSt+3;l++)
	{
		for(int m=jSt;m<jSt+3;m++)
		{
			if(arr[l][m]==val)
				return false;		
		}
	}
	for(int k=0;k<n;k++)
	{
		if(arr[i][k]==val)
			return false;
	}
	for(int k=0;k<n;k++)
	{
		if(arr[k][j]==val)
			return false;
	}
	return true;
}
bool find()
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(!arr[i][j])
				return true;
		}
	}
	return false;
}
bool Sudoko()
{
	if(!find())
		return true;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==0)
			{
				for(int k=1;k<=9;k++)
				{
					if(isValid(i,j,k))
					{
						arr[i][j]=k;
						if(Sudoko())
						{
							return true;
						}
						arr[i][j]=0;
					}
				}
				return false;
			}
		}
	}
}
void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    n=A.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]=='.')
                arr[i][j]=0;
            else
                arr[i][j]=A[i][j]-48;
        }
    }
    Sudoko();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            A[i][j]=arr[i][j]+48;
        }
    }
}