class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map <int,int> umap;
        priority_queue<pair<int, int>> myqueue;

        for(int i = 0; i < nums.size(); i++) {
            if(umap.find(nums[i]) != umap.end()) {
                umap[nums[i]] ++;
            } else {
                umap[nums[i]] = 1;
            }
        }

        //insert all key-value pair in the form of value-key
        for (auto& item : umap) {
            myqueue.push({item.second, item.first});
        }

        // Extract the top k elements from queue
        for (int i = 0; i < k; i++) {
            // Add the number (second part of pair)
            result.push_back(myqueue.top().second);  
            myqueue.pop();
        }

        return result;

        return result;
    }

};