class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hashChar;
        unordered_map<string, int> hashString;
        int result = 0;

        hashChar['I']=1;
        hashChar['V']=5;
        hashChar['X']=10;
        hashChar['L']=50;
        hashChar['C']=100;
        hashChar['D']=500;
        hashChar['M']=1000;

        hashString["IV"]=4;
        hashString["IX"]=9;
        hashString["XL"]=40;
        hashString["XC"]=90;
        hashString["CD"]=400;
        hashString["CM"]=900;

        int end = s.length();
        int start = 0;
        int start_next = 1;
        if(end < 0) return 0;
        while(start < end) {
            if(start_next >= end) {
                result += hashChar[s.at(start)];
                break;
            }
            string twoChar = "";
            twoChar += s.at(start);
            twoChar += s.at(start_next);
            if(hashString.find(twoChar) == hashString.end()){
                result += hashChar[s.at(start)];
            } else {
                result += hashString[twoChar];
                start++;
                start_next ++; 
            }
            start++;
            start_next ++; 
        }
        return result;
    }
};