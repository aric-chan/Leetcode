class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map <int,int> map;
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(map.find(complement) != map.end()) {
                //return corresponding index
                result = {i, map[complement]};
            } else {
                //insert current value and its index as key,value pair to map
                map[nums[i]] = i;
            }
        }
        return result;
    }
};