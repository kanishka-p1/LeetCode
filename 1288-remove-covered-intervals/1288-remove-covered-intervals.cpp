class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        int x = intervals[0][0];
        int y = intervals[0][1];
        
        int count = 1;
        
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] > x && intervals[i][1] > y){
                count++;
            }
            if(intervals[i][1] > y){
                x = intervals[i][0];
                y = intervals[i][1];
            }
        }
        return count;
    }
};