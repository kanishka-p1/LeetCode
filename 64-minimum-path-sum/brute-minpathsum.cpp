int mincostpath(int** input, int m, int n,int sr,int sc)
{
    if(sr == m - 1 && sc == n - 1)
        return input[sr][sc];
    int x, y, z;
    x = y = z = INT_MAX;
    
    if(sr < m-1)
        x = mincostpath(input, m, n, sr + 1, sc);
    if(sc < n - 1)
        y = mincostpath(input, m, n, sr, sc + 1);
    if(sr < m - 1 && sc < n - 1)
        z = mincostpath(input, m, n, sr + 1, sc + 1);
    
    return input[sr][sc] + min(x, min(y, z));
}

int minCostPath(int** input, int m, int n)
{
	//Write your code here
     return mincostpath(input, m, n, 0, 0);
}
