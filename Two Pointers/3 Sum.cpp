int Solution::threeSumClosest(vector<int> &A, int B) {
    int l, r;
 
    sort(A.begin(),A.end());
    
    int len=A.size();
    int ans;
    int min_diff=INT_MAX;
    for (int i = 0; i < len - 2; i++)
    {
 
        l = i + 1; // index of the first element in the remaining elements
        r = len-1; // index of the last element
        while (l < r)
        {
            if(A[i] + A[l] + A[r] == B)
            {
                return B;
            }   
            else
            {
                
            int sum=A[i] + A[l] + A[r]; 
            int diff=abs(sum-B);
            
            if(diff<min_diff)
               {
                   min_diff=diff;
                   ans=sum;
               }
            
            if (A[i] + A[l] + A[r] < B)
                l++;
            else 
                r--;
            }
        }
    }
    return ans;
}
