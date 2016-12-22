vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> v;
    if(binary_search(A.begin(),A.end(),B))
    {
        int ind=lower_bound(A.begin(),A.end(),B)-A.begin();
        int ind1=upper_bound(A.begin(),A.end(),B)-A.begin();
        v.push_back(ind);
        v.push_back(ind1-1);
        return v;
    }
    v.push_back(-1);
    v.push_back(-1);
    return v;
}
