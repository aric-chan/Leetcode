class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        //we need map to order the key
        map <int,int> map;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                if(map.find(nums[i]) != map.end()) {
                    map[nums[i]]++;
                } else {
                    map[nums[i]] = 1;
                }
            }
        }
        if(map.size() == 0) return -1;
        int maxsofar = 0;
        int indexReturn = 0;
        for(auto item : map) {
            // cout << item.first << item.second << endl;
            if(item.second > maxsofar) {
                maxsofar = item.second;
                indexReturn = item.first;
            }
        }
        return indexReturn;
    }
};