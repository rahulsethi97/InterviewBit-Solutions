vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    vector<vector<int> > ret;
    
    int x=0,y=0;
    
    int len=A.size();
    
    for(int i=0;i<len;i++)
    {
        vector<int> temp;
        
        int x1=x,y1=y;
        while(x1>=0 && y1>=0 && x1<len && y1<len)
        {
            temp.push_back(A[x1][y1]);
            x1++;
            y1--;
        }
        y++;
        ret.push_back(temp);
    }
    
    x=1,y=len-1;
    for(int i=0;i<len-1;i++)
    {
        vector<int> temp;
        
        int x1=x,y1=y;
        while(x1>=0 && y1>=0 && x1<len && y1<len)
        {
            temp.push_back(A[x1][y1]);
            x1++;
            y1--;
        }
        x++;
        ret.push_back(temp);
    }
    return ret;
    
}
