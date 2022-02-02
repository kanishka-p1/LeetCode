class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans, phash(26,0), hash(26,0);
        int n = s.size(), m = p.size();
        if(n < m){
            return {};
        }
        for(int i = 0; i < m; i++){
            phash[p[i] - 'a']++;
        }
        int i = 0, j = 0;
        while(j < n){
            hash[s[j] - 'a']++;
            
            if(j-i+1 < m){
                j++;
            }
            else if(j-i+1 == m){
                if(phash == hash)
                    ans.push_back(i);
                hash[s[i] - 'a']--;
                i++;
                j++;
            }
        }
        return ans;
    }
};