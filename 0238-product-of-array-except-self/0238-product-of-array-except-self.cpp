class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> startCulmulativeProduct;
        vector<int> endCulmulativeProduct;
        vector<int> result;
        int start = 1;
        for(int i = 0; i < nums.size(); i++){
            start *= nums[i];
            startCulmulativeProduct.push_back(start);
        }
        int end = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            end *= nums[i];
            endCulmulativeProduct.push_back(end);
        }

        for (int i = 0; i < nums.size()/2; i++){
            swap(endCulmulativeProduct[i],endCulmulativeProduct[nums.size() - 1 - i]);
        }

        for(int i = 0; i < nums.size(); i++){
            if (i == 0){
                result.push_back(endCulmulativeProduct[1]);
                continue;
            }
            if(i == nums.size() - 1){
                result.push_back(startCulmulativeProduct[i - 1]);
                break;
            }
            result.push_back(startCulmulativeProduct[i - 1]*endCulmulativeProduct[i + 1]);
        }
        return result;

    }
};