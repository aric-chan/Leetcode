class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        //O(n)
        int closestsofar = nums[0];
        for(auto n : nums) {
            if(abs(closestsofar) > abs(n)) {
                closestsofar = n;
            }
        }
        for(auto n : nums){
            if(closestsofar + n == 0 && n > closestsofar) {
                closestsofar = n;
            }
        }
        return closestsofar;
        //O(nlogn) not good
        // sort(nums.begin(),nums.end());
        // int last = nums.size() - 1;
        // int front = 0;
        // while(front != last) {
        //     if(abs(nums[front]) > abs(nums[last])){
        //         front++;
        //     } else if(abs(nums[front]) < abs(nums[last])){
        //         last--;
        //     } else {
        //         front++;
        //     }
        // }
        // return nums[front];
    }
};