// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) 
{
    int len=X.size();
    int ans=0;
    int diff;
    for(int i=1;i<len;i++)
    {
        diff=max(abs(X[i]-X[i-1]),abs(Y[i]-Y[i-1]));
        
        ans=ans+diff;
        
    }
    return ans;
}
