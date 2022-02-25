class Solution {
public:
    int compareVersion(string version1, string version2) {
        int v1 = 0, v2 = 0, i = 0, j = 0, curr;
        while(i < version1.size() || j < version2.size()){
            curr = 0;
            while(i < version1.size() && version1[i] != '.'){
                curr = curr * 10 + (version1[i] - '0');
                i++;
            }
            v1 += curr;
            curr = 0;
            while(j < version2.size() && version2[j] != '.'){
                curr = curr * 10 + (version2[j] - '0');
                j++;
            }
            v2 += curr;
            if(v1 < v2){
                return -1;
            }
            else if(v1 > v2){
                return 1;
            }
            i++;
            j++;
        }
        return 0;
    }
};