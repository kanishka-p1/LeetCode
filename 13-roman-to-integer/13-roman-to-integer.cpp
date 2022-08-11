class Solution {
public:
    int romanToInt(string s) {
        map<int, int> temp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        int i = 0;
        int sum = 0;
        
        while(i < s.length() - 1) {
            if(temp[s[i]] < temp[s[i + 1]]) {
                sum -= temp[s[i]];
            }
            else {
                sum += temp[s[i]];
            }
            i++;
        }
        sum += temp[s[i]];
        
        return sum;
    }
};