class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfitSofar = 0;
        int minP = prices[0];
        for(auto p : prices){
            minP = min(minP, p);
            maxProfitSofar = max(maxProfitSofar, p - minP);
        }

    return maxProfitSofar;
    }
};