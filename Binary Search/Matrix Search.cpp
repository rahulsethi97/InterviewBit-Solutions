int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int row=A.size();
    int col=A[0].size();
    int i=0,j=col-1;
    
    while(i<row && j>=0)
    {
        if(A[i][j]<B)
            i++;
        else if(A[i][j]>B)
            j--;
        else if(A[i][j]==B)
            return 1;
        
    }
    
    
    return 0;
}
