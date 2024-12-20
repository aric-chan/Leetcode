class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> stackT;
        for(auto c : t) {
            stackT.push(c);
        }
        int end = s.length() - 1;

        while(!stackT.empty() && end >= 0){
            if(stackT.top() == s.at(end)) {
                end--;
            }
            stackT.pop();
        }
        if(end < 0){
            return true;
        } else {
            return false;
        }
    }
};