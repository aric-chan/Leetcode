class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int nums_len = nums.size();
        vector<int> result;
        for(int i = 0; i < 2 * nums_len; i++) {
            int circular = i%nums_len;
            result.push_back(nums[circular]);
        }
        return result;
    }
};