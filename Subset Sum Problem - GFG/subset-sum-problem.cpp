// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size() + 1;
        int m = sum + 1;
        
        vector<vector<bool>> dp(n, vector<bool>(m));
        
        //if array consist of any number of elements but the sum is 0
        for(int i = 0; i < n; i++) {
            dp[i][0] = true;
        }
        
        //if array is 0 and sum is > 0
        for(int j = 1; j < m; j++) {
            dp[0][j] = false;
        }
        
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(arr[i - 1] <= j) {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                }
                else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        
        return dp[n - 1][m - 1];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends