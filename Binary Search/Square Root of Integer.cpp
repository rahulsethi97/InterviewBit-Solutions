int Solution::sqrt(int x) {
    if (x == 0 || x == 1) 
       return x;
 
    long start = 1, end = x, ans;   
    while (start <= end) 
    {        
        long mid = (start + end) / 2;
        long temp=mid*mid;
        if (temp == x)
            return mid;
 
        if (temp < x) 
        {
            start = mid + 1;
            ans = mid;
        } 
        else // If mid*mid is greater than x
            end = mid - 1;        
    }
    return ans;
    
}
