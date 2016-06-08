int Solution::maxProfit(const vector<int> &A) {
    int profit = 0;
    int len=A.size();
    for(int i=1; i<len; i++){
        int diff = A[i]-A[i-1];
        if(diff > 0){
            profit += diff;
        }
    }
    return profit;
}
