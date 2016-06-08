vector< vector<int> > g;

void func(vector<int> A,int l,int r)
{
    if (l == r)
     g.push_back(A);
    else
    {
       for (int i = l; i <= r; i++)
       {
          int temp=A[l]; A[l]=A[i]; A[i]=temp;
          func(A, l+1, r);
          temp=A[l]; A[l]=A[i]; A[i]=temp; //backtrack
       }
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    
    g.clear();
    vector< vector<int> > ret;
    func(A,0,A.size()-1);
    ret=g;
    return g;
}
