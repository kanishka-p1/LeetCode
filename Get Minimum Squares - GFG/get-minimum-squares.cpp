// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	
	int helper(int n, int *arr) {
	    if( sqrt(n) - floor(sqrt(n)) == 0) {   
	        arr[n] = 1;
	        return arr[n];
	    }
	    if(n <= 3) {  
	        arr[n] = n;
	        return n;
	    }
	    
	    int ans = n;
	    if(arr[n] != 0) {
	        return arr[n];
	    }
	    
	    for(int i = 1; i * i <= n ;i++) {   
	        arr[n] = ans = min(ans, 1 + helper(n - i * i, arr));
	    }
    
    return arr[n];
	}
	
	int MinSquares(int n)
	{
	    // Code here
	    int *arr = new int[n+1];
	    for(int i = 0; i < n+1; i++) {
	        arr[i] = 0;
	    }
	    return helper(n, arr);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends