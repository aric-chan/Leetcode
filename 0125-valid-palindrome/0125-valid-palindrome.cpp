class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i = 0; i <= s.length(); i++) {
            if(iswalnum(s[i])){
                str += tolower(s[i]);
            }
        }
        cout << str << endl;

        int left = 0;
        int right = str.length() - 1;
        cout << "left: " << left << "right: " << right << endl;

        while(left < right) {
            if(str[left] == str[right]) {
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;


    }
};