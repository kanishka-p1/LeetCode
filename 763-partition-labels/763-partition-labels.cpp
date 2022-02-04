class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> index(26,0);
        for(int i = 0; i < s.size(); i++){
            index[s[i] - 'a'] = i;
        }
        vector<int> result;
        int st = 0, e = 0;
        for(int i = 0; i < s.size(); i++){
            e = max(e, index[s[i] - 'a']);
            if(i == e){
                result.push_back(i - st + 1);
                st = i + 1;
            }
        }
        return result;
    }
};