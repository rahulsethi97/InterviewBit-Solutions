void Solution::arrange(vector<int> &A) 
{
    int len=A.size();
    
    for(int i=0;i<len;i++)
    {
        A[i]+=(A[A[i]]%len)*len;
    }
    
    
    for(int i=0;i<len;i++)
    {
        A[i]=A[i]/len;
    }
    
    
    
}
