int Solution::singleNumber(const vector<int> &A) {
 int len=A.size();
 int ans=0;
 for(int i=0;i<len;i++)
 {
     ans^=A[i];
 }
 return ans;
}
