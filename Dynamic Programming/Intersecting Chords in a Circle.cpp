int mod=1000000007;

int Solution::chordCnt(int N){
    long long f[N];
    f[0]=f[1]=1;
    
    
    for(int i=2;i<=N;i++)
    {
        f[i]=0;
        for(int j=i-1;j>=0;j--)
        {
            f[i]=(f[i]%mod + ( (f[j]%mod)*(f[i-j-1]%mod)%mod )%mod )%mod;
        }
    }
    return f[N];
}