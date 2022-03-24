class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        vector<int> countT(7), countB(7), same(7);
        for(int i = 0; i < n; i++){
            countT[tops[i]]++;
            countB[bottoms[i]]++;
            if(tops[i] == bottoms[i]){
                same[tops[i]]++;
            }
        }
        for(int i = 1; i < 7; i++){
            if(countT[i] + countB[i] - same[i] == n){
                return n - max(countT[i], countB[i]);
            }
        }
        return -1;
    }
};