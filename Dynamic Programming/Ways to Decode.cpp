int Solution::numDecodings(string A) {
    
    int len=A.size();
    int dp[len];
    if(A[0]=='0')
        return 0;
    
    dp[0]=1;
    //cout<<dp[0]<<" ";
    for(int i=1;i<len;i++)
    {
        
        if(A[i]=='0')
        {
            if(A[i-1]!='2' && A[i-1]!='1')
                return 0;
            else
            {   
                if(i==1)
                    dp[i]=1;
                else
                    dp[i]=dp[i-1];
            }
        }
        else
        {
            if(A[i]<='6' && (A[i-1]=='2' || A[i-1]=='1') )
                {
                if(i==1)
                    dp[i]=dp[i-1]+1;
                else
                    dp[i]=dp[i-2]+dp[i-1];    
                }
            else
                dp[i]=dp[i-1];
        }
        //cout<<dp[i]<<" ";
    }
    return dp[len-1];
}
