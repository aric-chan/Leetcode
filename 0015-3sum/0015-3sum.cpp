class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        auto first = nums.begin();
        auto last = nums.end();
        sort(first, last);

        for(int anchor = 0; anchor < nums.size()-2; anchor++) {
            if (anchor > 0 && nums[anchor] == nums[anchor - 1]) {
                continue; 
            }
                int left = anchor + 1;
                int right = nums.size() - 1;
                while(left < right) {
                    if(nums[left] + nums[right] + nums[anchor] < 0) {
                        //move left
                    int prevLeft = nums[left];
                    while (left < right && nums[left] == prevLeft) {
                        left++;
                    }
                        continue;
                    } else if (nums[left] + nums[right] + nums[anchor] > 0) {
                        //move right
                    int prevRight = nums[right];
                    while (left < right && nums[right] == prevRight) {
                        right--;
                    }
                        continue;
                    } else {
                        result.push_back({nums[anchor], nums[left], nums[right]});
                        int prev = nums[left];
                    int prevLeft = nums[left];
                    while (left < right && nums[left] == prevLeft) {
                        left++;
                    }
                        continue;
                    }
                }
            }    
        return result;
    }
};