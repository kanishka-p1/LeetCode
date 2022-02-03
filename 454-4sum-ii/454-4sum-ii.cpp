class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> hash;
        
        for(auto it1 : nums1){
            for(auto it2 : nums2){
                hash[it1 + it2]++;
            }
        }
        int count = 0;
        for(auto it3 : nums3){
            for(auto it4 : nums4){
                if(hash.count(-it3-it4)){
                    count += hash[-it3-it4];
                }
            }
        }
        return count;
    }
};