class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1Start = 0;
        int w2Start = 0;
        int w1End = word1.size() ;
        int w2End = word2.size() ;
        string result = "";

        while(w1Start != w1End || w2Start != w2End) {
            if(w1Start != w1End) {
                result += word1.at(w1Start);
                w1Start++;
            }
            if(w2Start != w2End) {
                result += word2.at(w2Start);
                w2Start++;
            }
        }
        // for(auto c : result){
        //     cout<<c<<endl;
        // }
        return result;
    }
};