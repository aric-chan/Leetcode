class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int num_ops = 0;
        for(int i = 0; i < nums.size(); i++) {
            // if number is not a multiple of 3, then only one operation is needed
            if(nums[i] % 3 != 0) num_ops ++;
        }
        return num_ops;
    }
};