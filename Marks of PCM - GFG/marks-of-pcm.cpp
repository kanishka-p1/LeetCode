// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class marks{
  public:
      int phy = 0;
      int chem = 0;
      int math = 0;
      
      marks(int phy, int chem, int math){
          this -> phy = phy;
          this -> chem = chem;
          this -> math = math;
      }
};

class compare{
  public:
     bool operator()(marks &a, marks &b){
         if(a.phy != b.phy){
             return a.phy < b.phy;
         }
         else if(a.chem != b.chem){
             return a.chem > b.chem;
         }
         else{
             return a.math < b.math; 
         }
     }
};

class Solution{
    public:
    void customSort (int phy[], int chem[], int math[], int N)
    {
        // your code here
        vector<marks> arr;
        
        for(int i = 0; i < N; i++){
            marks m = {phy[i], chem[i], math[i]};
            arr.push_back(m);
        }
        
        sort(arr.begin(), arr.end(), compare());
        
        for(int i = 0; i < N; i++){
            phy[i] = arr[i].phy;
            chem[i] = arr[i].chem;
            math[i] = arr[i].math;
        }
    } 
};

// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int phy[n];
		int chem[n];
		int math[n];
		for (int i = 0; i < n; ++i)
			cin >> phy[i] >> chem[i] >> math[i];
        Solution ob;
		ob.customSort (phy, chem, math, n);
		for (int i = 0; i < n; ++i)
			cout << phy[i] << " " << chem[i] << " " << math[i] << endl; 
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends