vector<vector<int> > Solution::subsets(vector<int> &A) {

    int n=A.size();
    vector< vector<int> > ret;
    vector<int> t;
    ret.push_back(t);
    
    int end=pow(2,n);
    
    for(int i=1;i<end;i++)
    {
        t.clear();
        int pos=n-1;
        int temp=i,flag=0;
        while(temp!=0)
        {
            flag=temp%2;
            temp/=2;
            
            if(flag==1)
                t.push_back(A[pos]);
            
            pos--;
        }
        sort(t.begin(),t.end());
        ret.push_back(t);
    }
    sort(ret.begin(),ret.end());
    return ret;
}