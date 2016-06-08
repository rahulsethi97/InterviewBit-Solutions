
vector<int> Solution::primesum(int A) {
    
    
    vector<int> ret;
    vector<bool> sieve(A+1);
    for(int i=2;i<=A;i++)
    {
        if(sieve[i]==0)
        {
            for(int j=2*i;j<=A;j+=i)
                sieve[j]=1;
        }
    }
    
    for(int i=2;i<=A;i++)
    {
        if(sieve[i]==0 && sieve[A-i]==0)
        {
                ret.push_back(i);
                ret.push_back(A-i);
                break;
        }
        
    }
    
    //cout<<ret.size();
     
    return ret;
}
