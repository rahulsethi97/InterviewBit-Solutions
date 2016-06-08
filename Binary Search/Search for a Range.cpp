vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int l=0,r=A.size()-1;
    int len=A.size();
    int mid,start=-1,end=-1;
    
    while(l<=r)
    {
        mid= (l + r)/2;
        
        if(A[mid]==B)
        {
            if(mid+1<len && A[mid+1]==B)
             {
                 l=mid+1;
             }
            else
            {
                end=mid;
                break;
            }
            
        }
        else if(A[mid]>B)
            r=mid-1;
        else
            l=mid+1;
    }
    
    l=0,r=len-1;
    while(l<=r)
    {
        mid= (l + r)/2;
        
        if(A[mid]==B)
        {
            if(mid-1>=0 && A[mid-1]==B)
             {
                 r=mid-1;
             }
            else
            {
                start=mid;
                break;
            }
            
        }
        else if(A[mid]>B)
            r=mid-1;
        else
            l=mid+1;
    }
    
    
    
    vector<int> ret;
    ret.push_back(start);
    ret.push_back(end);
    return ret;
    
}
