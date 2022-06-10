class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> ans;
        int left = 0, right = 0;
        int res = 0;
        while(right < s.size()) {
            char c = s[right];
            ans[c]++;
            
            while(ans[c] > 1) {
                char d = s[left];
                left++;
                ans[d]--;
            }
            
            right++;
            
            res = max(res, right - left);
        }
        return res;
    }
};