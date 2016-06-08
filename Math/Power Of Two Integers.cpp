bool Solution::isPower(int A) 
{
    
    if(A==1)
        return true;
        
   long long ctr;
   int limit;
   if(A>100001)
    limit=100001;
   else
    limit=A;
   
    for(int i=2;i<=limit;i++)
    {
                ctr=i*i;
                for( int j=1; j<32 ;j++ )
                {
                    if(ctr==A)
                     return true;
                    ctr=ctr*i;
                }
            
    }
    
    return false;
}
