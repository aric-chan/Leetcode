class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int last = nums.size() - 1;
        int front = 0;
        while(front != last) {
            if(abs(nums[front]) > abs(nums[last])){
                front++;
            } else if(abs(nums[front]) < abs(nums[last])){
                last--;
            } else {
                front++;
            }
        }
        return nums[front];



        
    }
};