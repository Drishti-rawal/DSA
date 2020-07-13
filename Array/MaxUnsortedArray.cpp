vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> result;
    int n=A.size();
    int i=0,j=n-1,start,end;
    //iterating through front
    for(int i=0;i<n-1;i++)
    if(A[i]>A[i+1])
    {
        start=i;
        break;
    }
    
    //If already sorted return -1
    if(start==n-1)
    {
        result.push_back(-1);
        return result;
    }
    //iterating backwards
    for(int j=n-1;j>0;j--)
    if(A[j]<A[j-1])
    {
        end=j;
        break;
    }
    
    int min=INT_MAX;
    int max=INT_MIN;
    
    //Finding the minimum and maximum from the current unsorted array achieved
    for(int k=start;k<=end;k++)
    {
        if(A[k]<min)
            min=A[k];
        if(A[k]>max)
            max=A[k];
    }
    
    //Finding position of min in sorted array
    int l = 0, r = n - 1;
	while(A[l] <= min and l <= start){
	   	l++;
	}
	while(A[r] >= max and r >= end){
		r--;
	}
    
    result.push_back(l);
    result.push_back(r);
    return result;
}
