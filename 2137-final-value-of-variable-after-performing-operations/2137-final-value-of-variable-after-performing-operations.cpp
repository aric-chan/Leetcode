class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int result = 0;
        for (int i = 0; i < operations.size(); i++) {
            if(operations[i][0] == '-' || operations[i][2] == '-') {
                result--;
            } else {
                result++;
            } 
        }
        return result;
    }
};