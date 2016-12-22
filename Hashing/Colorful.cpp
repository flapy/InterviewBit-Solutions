int Solution::colorful(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int arr[11];
    int i=0;
    while(A)
    {
        arr[i++]=A%10;
        A/=10;
    }
    int n=i;
    map<int,int> m;
    for(int j=n-1;j>=0;j--)
    {
        int ans=arr[j];
        if((m[ans]))
            return 0;
        m[ans]++;
        for(int k=j-1;k>=0;k--)
        {
            ans*=arr[k];
            if(m[ans])
                return 0;
            m[ans]++;
        }
    }
    return 1;
}
