int Solution::isValidSudoku(const vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=A.size();
    map<char,int> m;
    char arr[10][10];
    for(int i=0;i<l;i++)
    {
        int len=A[i].length();
        string str=A[i];
        for(int j=0;j<len;j++)
        {
            arr[i][j]=str[j];
        }
    }
    for(int i=0;i<l;i++)
    {
        int cnt=0;
        m.clear();
        for(int j=0;j<l;j++)
        {
            if(isdigit(arr[i][j]))
                m[arr[i][j]]++;
            else
                cnt++;
        }
        if(m.size()+cnt!=9)
        {
            
            return 0;
        }
        m.clear();
        cnt=0;
        for(int j=0;j<l;j++)
        {
            if(isdigit(arr[j][i]))
            m[arr[j][i]]++;
            else
                cnt++;
        }
        if(m.size()+cnt!=9)
        {
            return 0;
        }
        cnt=0;
        m.clear();
    }
    for(int i=0;i<l;i+=3)
    {
        for(int j=0;j<l;j+=3)
        {
            int cnt=0;
            for(int k=i;k<i+3;k++)
            {
                for(int p=j;p<j+3;p++)
                {
                    if(isdigit(arr[k][p]))
                    m[arr[k][p]]++;
                    else
                        cnt++;
                }
            }
            if(m.size()+cnt!=9)
                return 0;
            m.clear();
        }
    }
    return 1;
}
