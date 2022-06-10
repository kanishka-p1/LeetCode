int minCostPath(int **input, int m, int n, int i, int j, int **output) {
        if(i == m - 1 && j == n - 1) {
            return input[i][j];
        }
        if(i >= m || j >= n) {
            return INT_MAX;
        }
        
        if(output[i][j] != -1) {
            return output[i][j];
        }
        
        int x = minCostPath(input, m, n, i, j + 1, output);
        int y = minCostPath(input, m, n, i + 1, j + 1, output);
        int z = minCostPath(input, m, n, i + 1, j, output);
        
        int ans = input[i][j] + min(x, min(y, z));
        
        output[i][j] = ans;
        
        return ans;
    }

int minCostPath(int **input, int m, int n, int i, int j) {
    int **output = new int*[m];
        for(int i = 0; i < m; i++) {
            output[i] = new int[n];
            for(int j = 0; j < n; j++) {
                output[i][j] = -1;
            }
        }
        return minCostPath(input, m, n, 0, 0, output);
}

int minCostPath(int **input, int m, int n)
{
	//Write your code here
    return minCostPath(input, m, n, 0, 0);
}
