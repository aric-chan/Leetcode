class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word = strs[0];
        string result ="";
        int count = 0;

        while(count < word.length()) {
            bool flag = true;
            for(int i = 1; i < strs.size(); i++){
                if(count >= strs[i].length()){
                    flag = false;
                    break;
                }
                if(strs[i].at(count)!= word.at(count)){
                    flag = false;
                }
            }
            if(flag == true){
                result += word.at(count);
                count++;
            } else {
                break;
            }
        }
        return result;
    }
};