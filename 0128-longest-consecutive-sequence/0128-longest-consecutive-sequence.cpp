class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> arrayMap;
        vector<int> array;
        if(nums.size() == 0) return 0;
        for(int n : nums){
            arrayMap[n]++;
        }

        for(auto i = arrayMap.begin(); i != arrayMap.end(); i++){
            array.push_back(i->first);
        }
        int count = 1;
        int maxCount = 1;
        for(int i = 1; i < array.size() ; i++){
            if(array[i] - array[i - 1] == 1){
                count++;
            } else {
                count = 1;
            }
            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};