class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> a;
        for(int it : nums){
            a[it]++;
        }
        int count = 0;
        
        for(auto i : a){
            if(k == 0){
                if(i.second > 1){
                    count++;
                }
            }
            else if(a.find(i.first + k) != a.end()){
                count++;
            }
        }
        return count;
    }
};