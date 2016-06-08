int func(vector< int > A)
{
    //cout<<sum<<" "<<curr<<" "<<inc<<"\n";
    /*if(curr >= A.size())
        return sum;
    else
    {
        if(inc==true)
            {
                if(A[curr]<0)
                    return func(A,sum,curr+1,true);
                else
                    return max( func(A,sum+A[curr],curr+1,false) , func(A,sum,curr+1,true) );
            }
        else
            {
                return func(A,sum,curr+1,true);
            }
    }*/
     
     
    int len=A.size();
    
    int dp[len];
    dp[0]=A[0];
    
    for(int i=1;i<len;i++)
    {
        if(A[i]<0)
            dp[i]=dp[i-1];
        else
        {
            if(i==1)
                dp[i] = max(A[i] , dp[i-1]);
            else
                dp[i] = max( dp[i-2]+A[i] , dp[i-1] );
        }
    }
    return dp[len-1];
}


int Solution::adjacent(vector<vector<int> > &A) {
    vector<int> a;
    int len=A[0].size();
    
    for(int i=0;i<len;i++)
        a.push_back(max( A[0][i] , A[1][i] ) );
        
    //cout<<a.size()<<"\n";
    return func(a);  
    
    
}
