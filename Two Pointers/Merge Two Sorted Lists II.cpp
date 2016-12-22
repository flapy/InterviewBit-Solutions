void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int m=B.size();
    int i,j;
    i=j=0;
    vector<int> v;
    while(i<n && j<m)
    {
        if(A[i]<=B[j])
        {
            v.push_back(A[i]);
            i++;
        }
        else
        {
            v.push_back(B[j]);
            j++;
        }
    }
    while(i<n)
    {
        v.push_back(A[i]);
        i++;
    }
    while(j<m)
    {
        v.push_back(B[j]);
        j++;
    }
    A.clear();
    A=v;
}
