class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ten = 0, five = 0;
        for(int it : bills){
            if(it == 5){
                five++;
            }
            else if(it == 10){
                ten++;
                five--;
            }
            else if(ten > 0){
                ten--;
                five--;
            }
            else{
                five -= 3;
            }
            if(five < 0){
                return false;
            }
        }
        return true;
    }
};