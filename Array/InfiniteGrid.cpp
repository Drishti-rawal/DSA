/*
You are in an infinite 2D grid where you can move in any of the 8 directions

 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points.. Give the minimum number of steps in which you can achieve it. You start from the first point.
*/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int minSteps=0;
    for(int i=1;i<A.size();i++)
    {
        int diffX = abs(A[i]-A[i-1]);
        //cout<<"x"<<diffX<<endl;
        int diffY = abs(B[i]-B[i-1]);
        //cout<<"y "<<diffY<<endl;
        int m = (diffX>diffY)?diffX : diffY;
        //cout<<"m = "<<m<<endl;
        minSteps+=m;
        //cout<<minSteps;
    }
    return minSteps;
}
