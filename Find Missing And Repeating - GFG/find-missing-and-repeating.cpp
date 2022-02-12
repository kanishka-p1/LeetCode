// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *res = new int(2);
        int xr = 0;
        for(int i = 0; i < n; i++){
            xr ^= arr[i];
        }
        for(int i = 1; i <= n; i++){
            xr ^= i;
        }
        int rmsb = xr & -xr;
        int x = 0, y = 0;
        
        for(int i = 0; i < n; i++){
            if((arr[i] & rmsb) == 0){
                x = x ^ arr[i];
            }
            else{
                y = y ^ arr[i];
            }
        }
        for(int i = 1; i <= n; i++){
            if((i & rmsb) == 0){
                x = x ^ i;
            }
            else{
                y = y ^ i;
            }
        }
        
        for(int i = 0; i < n; i++){
            if(x == arr[i]){
                res[0] = x;
                res[1] = y;
                break;
            }
            else if(y == arr[i]){
                res[0] = y;
                res[1] = x;
                break;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends