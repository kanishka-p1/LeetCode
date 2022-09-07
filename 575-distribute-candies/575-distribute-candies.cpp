class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> kinds;
        for(int it : candyType) {
            kinds.insert(it);
        }
        return min(kinds.size(), candyType.size() / 2);
    }
};