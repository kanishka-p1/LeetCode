// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	
	int helper(int N, int *ans) {
	    if(N == 1) {
	        ans[N] = 0;
	        return ans[N];
	    }
	    
	    if(ans[N] != -1) {
	        return 1 + ans[N];
	    }
	    
	    int a = INT_MAX, b = a, c = b;
	    a = helper(N - 1, ans);
	    if(N % 2 == 0) {
	        b = helper(N / 2, ans);
	    }
	    if(N % 3 == 0) {
	        c = helper(N / 3, ans);
	    }
	    
	    ans[N] = min(a, min(b, c));
	    
	    return 1 + ans[N];
	}
	
	int minSteps(int N) 
	{ 
	    // Your code goes here
	    if(N == 1) {
	        return 0;
	    }
	    int *ans = new int [N+1];
	    for(int i = 0; i < N + 1; i++) {
	        ans[i] = -1;
	    }
	    return helper(N, ans);
	} 
};


// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends