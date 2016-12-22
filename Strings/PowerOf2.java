import java.math.*;
public class Solution {

	public int power(String a) {
	    if(a.equals("1"))
	        return 0;
	    BigInteger bi=new BigInteger(a);
	    BigInteger two=new BigInteger("2");
	    BigInteger zero=new BigInteger("0");
	    BigInteger one=new BigInteger("1");
	    while(true)
	    {
	        BigInteger bi3=new BigInteger("0");
	        bi3=bi.mod(two);
	        if(bi3.compareTo(zero)==0)
	        {
	            bi=bi.divide(two);
	            if(bi.compareTo(one)==0)
	                return 1;
	        }
	       else
	        return 0;    
	    }
	    
	}
}
