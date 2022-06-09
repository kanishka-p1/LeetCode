// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    long long int countBT(int h, long long int *arr) {
        if(h <= 1){
            return 1;
        }
        if(arr[h] != -1) {
            return arr[h];
        }
        
        int mod = pow(10, 9) + 7;
        long long int x = countBT(h - 1, arr);
        long long int y = countBT(h - 2, arr);
        
        arr[h - 1] = x % mod;
        arr[h - 2] = y % mod;
        
        long long int temp1 = (x * x) % mod;
        long long int temp2 = (2 * x * y) % mod;
        
        long long int ans = (temp1 + temp2) % mod;
        arr[h] = ans;
        
        return ans;
    }
  
    long long int countBT(int h) { 
        // code here
        long long int *ans = new long long int[h + 1];
        for(int i = 0; i < h + 1; i++) {
            ans[i] = -1;
        }
        return countBT(h, ans);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int h;
        cin >> h;
        Solution ob;
        cout<<ob.countBT(h)<<endl;  
    }
    return 0;
}
  // } Driver Code Ends
