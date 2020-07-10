int Solution::repeatedNumber(const vector<int> &B) {
    vector<int> A=B;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i]==A[i+1])
            return A[i];
    }
    return -1;
}
