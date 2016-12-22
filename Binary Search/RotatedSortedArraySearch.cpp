int findPivot(vector<int> a)
{
    int start=0;
    int end=a.size()-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]>a[mid+1])
            return mid+1;
        if(a[start]<=a[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int binarySearch(int low,int high,int val,vector<int> a)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==val)
            return mid;
        else if(a[mid]>val)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}
int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> a=A;
    int ind=findPivot(A);
    if(ind==-1)
    {
        if(binary_search(A.begin(),A.end(),B))
        {
            return lower_bound(A.begin(),A.end(),B)-A.begin();
        }
        else
        {
            return -1;
        }
    }
    else
    {
        if(a[ind]==B)
        {
            return ind;
        }
        int ind1=binarySearch(0,ind-1,B,a);
        if(ind1==-1)
        {
            ind1=binarySearch(ind+1,A.size()-1,B,a);
        }
        return ind1;
    }
}
