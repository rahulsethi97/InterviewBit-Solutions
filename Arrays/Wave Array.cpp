vector<int> Solution::wave(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    sort(A.begin(),A.end());
    int len=A.size();
    for(int i=0;i<len;i=i+2)
    {
        if(i!=(len-1))
        {
        int temp;
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
        }
    }
    
    vector<int> B;
    for(int i=0;i<len;i++)
    {
        B.push_back(A[i]);
    }
    return B;
    
}
