class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        multimap<int, int> order;
        vector<int> result;
        for(auto i : nums) {
            freqMap[i]++;
        }
        for(auto e : freqMap){
            order.insert({e.second,e.first});
            // cout << e.second << e.first << endl;
        }

        for(auto i = order.rbegin(); i != order.rend(); i++) {
            // cout<<"order"<<i->first<<i->second<<endl;
            if(k!=0) {
                result.push_back(i->second);
            } else {
                return result;
            }
            k--;
        }
        return result;
    }
};