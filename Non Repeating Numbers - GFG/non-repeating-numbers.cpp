// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int a = 0;
        for(auto it : nums){
            a = a ^ it;
        }
        
        int rsbm = a & -a;
        int x = 0, y = 0;
        vector<int> ans;
        
        for(auto it : nums){
            if((it & rsbm) == 0){
                x = x ^ it;
            }
            else{
                y = y ^ it;
            }
        }
        
        ans.push_back(x);
        ans.push_back(y);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends