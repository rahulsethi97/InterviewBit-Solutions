int mod=1000007;

int Solution::coinchange2(vector<int> &A, int B) {
    int len=A.size();
    int count[B+1];
    
    for(int i=0;i<=B;i++)
        count[i]=0;
    count[0]=1;
   
    for(int i=0;i<len;i++)
    {
        
        for(int j=A[i];j<=B;j++)
        {
            count[j]=((count[j]%mod)+(count[j-A[i]]%mod))%mod;
        }
        
    }
    return count[B];
}
