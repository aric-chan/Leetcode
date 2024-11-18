class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int areasofar = (right - left) * min(height[left],height[right]);
        int maxarea = areasofar;

        while(left < right) {
            if(areasofar > maxarea) {
                maxarea = areasofar;
            }
            if(height[left] <= height[right]){
                left++;
            } else {
                right--;
            }
            areasofar = (right - left) * min(height[left],height[right]);
        }
        return maxarea;



    }
};