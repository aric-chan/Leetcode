class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> dict;
        for(auto c:s) {
            dict[c]++;
        }
        for(auto c:t){
            dict[c]--;
        }
        for(auto i:dict) {
            if(i.second != 0) {
                return false;
            }
        }
        return true;

    }
};