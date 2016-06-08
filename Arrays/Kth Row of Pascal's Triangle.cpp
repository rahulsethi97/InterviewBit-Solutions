vector<int> Solution::getRow(int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> row(n+1);
    row[0] = 1; //First element is always 1
    for(int i=1; i<n/2+1; i++){ //Progress up, until reaching the middle value
        row[i] = row[i-1] * (n-i+1)/i;
    }
    for(int i=n/2+1; i<=n; i++){ //Copy the inverse of the first part
        row[i] = row[n-i];
    }
    return row;
}
