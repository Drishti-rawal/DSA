int Solution::maxSubArray(const vector<int> &A) {
    int newMax = -2000 , maxEnd=0;
    for(int i=0;i<A.size();i++)
    {
        maxEnd+=A[i];
        if(newMax<maxEnd)
            newMax = maxEnd;
        if(maxEnd<0)
            maxEnd=0;
    }
    return newMax;
}
