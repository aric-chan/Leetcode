class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> targetdiff;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            if(targetdiff.find(nums[i])!= targetdiff.end()){
                result.push_back(targetdiff[nums[i]]);
                result.push_back(i);
                return result;
            }
            int diff = target - nums[i];
            targetdiff[diff] = i;
        }
        return result;
    }
};