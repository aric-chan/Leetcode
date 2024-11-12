class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size() - 2; i++){
            int appear = 0;
            for(int r = 0; r < nums.size(); r++){
                if (i == nums[r]) {
                    appear++;
                
                if(appear == 2) result.push_back(i);
                if(result.size() == 2) break;
                }
            }
        }
        return result;
        
    }
};