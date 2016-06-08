int func(vector<int> a, int len)
{
    if(a[0]==0)
        {
            if(len==1)
                return 0;
            else
                return -1;
        }
    int dp[len];
    
    for(int i=0;i<len;i++)
        dp[i]=-1;
    
    
    dp[0]=1;
    
    
    
    int num=1;
    int st=1;
    int end = min(a[0],len-1);
    int m=a[0];
    while(st<len)
    {
        
        for(int i=st;i<=end;i++)
        {
            dp[i]=num;
            
            m = max( m , i+a[i]);
        }
        //cout<<"st="<<st<<" end="<<end<<" m="<<m<<"\n";
        
        if(m <= end)
            break;
        
        num++;
        st = end+1;
        end = min (m , len-1);
        
    }
    
    return dp[len-1];
    
}


int Solution::jump(vector<int> &A) {
   
   int ans = func(A,A.size());
   
   return ans;
   
}
