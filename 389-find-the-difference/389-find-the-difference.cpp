class Solution {
public:
    char findTheDifference(string s, string t) {
        char a = 0;
        for(auto st : s){
            a ^= st;
        }
        for(auto tt : t){
            a ^= tt;
        }
        return a;
    }
};