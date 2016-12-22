string Solution::addBinary(string A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more detail
    
    int l1=A.length();
    int l2=B.length();
    string ans="";
    int carry=0;
    if(l1<l2)
    {
        int pos;
	    for(int i=l1-1, j=l2-1;i>=0;i--,j--)
	    {
	       if(A[i]=='1' && B[j]=='1')
	       {
	           if(!carry)
	                ans+="0",carry=1;
	            else
	                ans+="1";
	       }
	       else if(A[i]=='1' || B[j]=='1' )
	       {
    	        if(carry)
    	            ans+="0";
    	        else
    	            ans+="1";    
	       }
	       else
	       {
	            if(carry)
	                ans+="1",carry=0;
	           else
	                ans+="0";
	        }
	        pos=j;
	    }
	    for(int j=pos-1;j>=0;j--)
	    {
	        if(carry)
	        {
	            if(B[j]=='1')
	                ans+="0";
	           else
	                ans+="1",carry=0;
            }
            else
            {
                ans+=B[j];
            }
	    }
    }
    else
    {
        int pos;
        for(int i=l2-1, j=l1-1;i>=0;i--,j--)
	    {
	        //cout<<A[j]<<" and "<<B[i]<<endl;
	       if(A[j]=='1' && B[i]=='1')
	       {
	           if(!carry)
	                ans+="0",carry=1;
	            else
	                ans+="1";
	       }
	       else if(A[j]=='1' || B[i]=='1' )
	       {
	           if(carry)
	                ans+="0";
	            else
	                ans+="1";
	       }
	       else
	       {
	            if(carry)
	                ans+="1",carry=0;
	           else
	                ans+="0";
	        }
	        pos=j;
	    }
	    //cout<<pos<<endl;
	    for(int j=pos-1;j>=0;j--)
	    {
	        if(carry)
	        {
	            if(A[j]=='1')
	                ans+="0";
	           else
	                ans+="1",carry=0;
            }
            else
            {
                ans+=A[j];
            }
	    }
    }
    if(carry)
        ans+="1";
    reverse(ans.begin(),ans.end());
    return ans;
}
