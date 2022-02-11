class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> st1(26), st2(26);
        for(auto &it : s1){
            st1[it - 'a']++;
        }
        
        for(int i = 0; i < s2.size(); i++){
            st2[s2[i] - 'a']++;
            if(i >= s1.size() - 1){
                if(st1 == st2){
                    return true;
                }
                st2[s2[i - s1.size() + 1] - 'a']--;
            }
        }
        return false;
    }
};