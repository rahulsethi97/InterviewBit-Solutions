string Solution::convert(string A, int k) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string s="";
    char encrypt[A.size()];
    int pos=0;
    int dist,even_dist,odd_dist;
	int start,flag=1; // flag=1 for odd turn and 0 for even turn
	if(k==1)
	    return A;
	for(int i=0;i<k;i++)
	{
		encrypt[pos]=A[i];
		pos++;
		
		start=i;
		flag=0;
		dist=2*(k-i-1); // Initial distance will always be of odd turn
		
		if(i==0 || i==(k-1))
		{
			dist= 2*(k-1);
	
			while((start+dist)<A.size())
			{
		    	encrypt[pos]=A[start+dist];
		    	pos++;
			start=start+dist;
			}
		}
		else
		{
			while((start+dist)<A.size())
			{
			
				encrypt[pos]=A[start+dist];
				pos++;
			start=start+dist;
			
			if(flag) // odd
			{
			 dist=2*(k-i-1);
			 flag=0;	
			}
			else	// even
			{
			 dist=2*i;
			 flag=1;
			}
			
			}
		}
	}
	for(int i=0;i<A.size();i++)
	    s+=encrypt[i];
	
	return s;
    
}
