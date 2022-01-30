class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0, currarea = 0;
        int start = 0, end = size(height) - 1;
        while(start < end){
            if(height[start] > height[end]){
                currarea = height[end] * (end - start);
                end--;
            }
            else if(height[start] < height[end]){
                currarea = height[start] * (end - start);
                start++;
            }
            else if(height[start] = height[end]){
                currarea = height[end] * (end - start);
                end--;
            }
            maxarea = max(maxarea, currarea);
        }
        return maxarea;
    }
};