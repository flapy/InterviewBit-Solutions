int Solution::largestRectangleArea(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    stack<int> s;
	int area=INT_MIN;
	int n=A.size();
	int i;
	for(i=0;i<n;)
	{
		if(s.empty()  || A[s.top()]<=A[i])
		{
			s.push(i++);
		}
		else
		{
			int to=s.top();
			s.pop();
			if(s.empty())
			{
				area=max(area,A[to]*i);
			}
			else
			area=max(area,A[to]*(i-s.top()-1));
		}
	}
	while(!s.empty())
	{
		int to=s.top();
		s.pop();
		if(s.empty())
		{
			area=max(area,A[to]*i);
		}
		else
		area=max(area,A[to]*(i-s.top()-1));
	}
    return area;
}
