// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    vector<int> sieve(int num){
        vector<bool> arr(num + 1);  //false -> prime
        
        for(int i = 2; i * i < arr.size(); i++){
            if(arr[i] == false){
                for(int j = 2 * i; j < arr.size(); j += i){
                    arr[j] = true;
                }
            }
        }
        vector<int> ans;
        for(int i = 2; i < arr.size(); i++){
            if(arr[i] == false){
                ans.push_back(i);
            }
        }
        return ans;
    }
  
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> res;
        int rootn = (int) sqrt(N);
        vector<bool> arr(N - M + 1);  //false -> prime || true -> not prime
        vector<int> primes = sieve(rootn);
        for(int p : primes){
            int multiple = ceil((M * 1.0) / p);
            if(multiple == 1){
                multiple++;
            }
            int ind = multiple * p - M;
            for(int j = ind; j < arr.size(); j += p){
                arr[j] = true;
            }
        }
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == false && i + M != 1){
                int val = i + M;
                res.push_back(val);
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
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends