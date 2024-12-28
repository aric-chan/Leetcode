class Solution {
public:
    int hammingWeight(int n) {
        string str = "";
        int count = 0;
        while(n != 0){
            // cout << "n : " << n << endl;
            // cout << "str *before : " << str << endl;
            str = to_string(n % 2) + str;
            // cout << "str *after : " << str << endl;
            n = n / 2;
        }
        for(int i = 0; i < str.size();i++){
            if(str.at(i) == '1') count++;
        }
        // cout<<"count : "<<count<<endl;

        return count;
    }
};