class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> stackT;
        for(auto c : t) {
            stackT.push(c);
        }
        int end = s.length() - 1;
        if(end < 0) return true;
        while(!stackT.empty() && end >= 0){
            if(stackT.top() != s.at(end)) {
                stackT.pop();
            } else {
                stackT.pop();
                end--;
            }
        }
        if(end < 0){
            return true;
        } else {
            return false;
        }
    }
};