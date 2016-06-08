vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> ret;
    int len=A.size();
    vector<int> mystack;
    
    ret.push_back(-1);
    mystack.push_back(A[0]);
    
    for(int i=1;i<len;i++)
    {
        if(mystack[mystack.size()-1]<A[i])
        {
            ret.push_back(mystack[mystack.size()-1]);
        }
        else
        {
            while(mystack.size()!=0 && mystack[mystack.size()-1]>=A[i])
                mystack.pop_back();
            
            if(mystack.size()==0)
                ret.push_back(-1);
            else
                ret.push_back(mystack[mystack.size()-1]);
        }
        mystack.push_back(A[i]);
        
    }
    return ret;
}
