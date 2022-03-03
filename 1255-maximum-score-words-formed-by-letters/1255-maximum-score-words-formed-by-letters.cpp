class Solution {
public:
    int ans = 0;
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int> freq(26, 0), used(26, 0);
        for(auto& it : letters){
            freq[it - 'a']++;
        }
        helper(words, score, freq, used, 0, 0);
        return ans;
    }
    
    void helper(vector<string>& words, vector<int>& score, vector<int>& freq, vector<int>& used, int pos, int count){
        for(int i = 0; i < 26; i++){
            if(used[i] > freq[i]){
                return;
            }
        }
        ans =  max(ans, count);
        
        for(int i = pos; i < words.size(); i++){
            for(auto& it : words[i]){
                used[it - 'a']++;
                count += score[it - 'a'];
            }
            
            helper(words, score, freq, used, i + 1, count);
            
            for(auto& it : words[i]){
                used[it - 'a']--;
                count -= score[it - 'a'];
            }
        }
    }
};