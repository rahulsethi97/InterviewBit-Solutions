int Solution::titleToNumber(string A) {
    
    
    int len=A.size();
    int power=len-1;
    
    int ans=0;
    
    for(int i=0;i<len;i++)
    {
        ans=ans + (A[i]-'A'+1) * pow(26,power);
        power--;
    }
    return ans;
}
