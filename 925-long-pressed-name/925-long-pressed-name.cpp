class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size(), m = typed.size();
        int i = 0, j = 0;
        
        if(n > m){
            return false;
        }
        
        else{
            while(i < n && j < m){
                if(name[i] == typed[j]){
                    i++;
                    j++;
                }
                else if(i > 0 && name[i-1] == typed[j]){
                    j++;
                }
                else{
                    return false;
                }
            }
        
            while(j < m){
                if(name[i-1] == typed[j]){
                    j++;
                }
                else
                    return false;
            }
        
            if(i < n){
                return false;
            }
        }
        
        return true;
    }
};