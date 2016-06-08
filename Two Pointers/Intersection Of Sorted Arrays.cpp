vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    
    int i=0,j=0;
    int len1=A.size(),len2=B.size();
    vector<int> ret;
    while(i<len1 && j<len2)
    {
        if(A[i]==B[j])
        {
            ret.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]<B[j])
            i++;
        else
            j++;
        
    }
    return ret;
    
}
