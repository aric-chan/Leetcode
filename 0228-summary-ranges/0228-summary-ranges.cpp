class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;

        if (nums.empty()) return result; // Handle edge case of an empty input array

        int start = nums[0]; // Start of the current range

        for (int i = 1; i <= nums.size(); i++) {
            // Check if the current number ends the current range
            if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
                if (start == nums[i - 1]) {
                    // Single number range
                    result.push_back(to_string(start));
                } else {
                    // Multi-number range
                    result.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
                }
                if (i < nums.size()) {
                    start = nums[i]; // Start a new range
                }
            }
        }

        return result;
    
    }
};