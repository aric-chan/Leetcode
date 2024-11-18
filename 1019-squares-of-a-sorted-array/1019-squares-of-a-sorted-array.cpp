class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> reversed_result;
        while(left <= right) {
            if(abs(nums[left]) >= abs(nums[right])) {
                reversed_result.push_back(pow(nums[left],2));
                left++;
            } else {
                reversed_result.push_back(pow(nums[right],2));
                right--;
            }
        }
        vector<int> result;
        while(reversed_result.size()) {
            result.push_back(reversed_result.back());
            reversed_result.pop_back();
        }

        return result;

    }
};