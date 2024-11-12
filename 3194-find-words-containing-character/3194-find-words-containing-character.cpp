class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        for(int i = 0; i < words.size(); i++) {
            int search = words[i].find(x);
            if(search != string::npos) {
                result.push_back(i);
            }
        }
        return result;
    }
};