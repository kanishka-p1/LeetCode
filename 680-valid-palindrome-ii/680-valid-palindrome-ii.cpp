class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1, count = 0, count1 = 0;
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                i++;
                count++;
            }
        }
        i = 0, j = s.size() - 1;
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                j--;
                count1++;
            }
        }
        if(count == 0 || count1 == 0){
            return true;
        }
        if(count == 1 || count1 == 1){
            return true;
        }
        return false;
    }
};