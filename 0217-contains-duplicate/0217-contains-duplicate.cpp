class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> countMap;
        for (auto i : nums) {
            countMap[i]++;
            if(countMap[i] >= 2) {
                return true;
            }
        }

        return false;
    }
};