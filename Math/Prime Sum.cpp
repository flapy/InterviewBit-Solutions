bool primes[100000000]={false};
void foo(int n)
{
    primes[1]=true;
    primes[0]=true;
    for(int i=2;i<=n;i++)
    {
        if(!primes[i])
        {
            int j=2;
            while(j*i<=n)
            {
                primes[i*j]=true;
                j++;
            }
        }
    }
}
vector<int> Solution::primesum(int A) {
    foo(A);
    vector<int> v;
    for(int i=2;i<=A;i++)
    {
        if(!primes[i])
        {
            if(!primes[A-i])
            {
                v.push_back(i);
                v.push_back(A-i);
                break;
            }
        }
    }
    return v;
}
