class Solution {
public:
    
    bool helper(vector<int>& piles, int mid, int h){
        int hours = 0;
        for(int it : piles){
            int div = it / mid;
            hours += div;
            if(it % mid != 0){
                hours++;
            }
        }
        return hours <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = INT_MAX;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(helper(piles, mid, h)){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};