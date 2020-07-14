vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> result(A,vector<int> (A));
    int num=1;
    int row_start=0,row_end=A-1;
    int col_start=0,col_end=A-1;
            while(num<=A*A)
            {
                //printing first row
                for(int j=col_start;j<=col_end;j++)
                  {result[row_start][j]=num;
                  num++;}
                 
                row_start++;
                  
                //printing last column
                for(int i=row_start;i<=row_end;i++)
                    {result[i][col_end]=num;
                    num++;}
                col_end--; 
                 
                //printing last row
                for(int j=col_end;j>=col_start;j--)
                    {result[row_end][j]=num;
                    num++;}
                row_end--;
                 
                //printing first  column
                for(int i=row_end;i>=row_start;i--)
                    {result[i][col_start]=num;
                    num++;}
                col_start++;
                
            }
        return result;
}
