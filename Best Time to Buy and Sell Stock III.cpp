class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minoldprice = INT32_MAX, minnewprice = INT32_MAX;
        int oldprofit = 0, newprofit = 0;
        for(int i=0; i<prices.size(); i++){
            minoldprice = min(prices[i], minoldprice);
            oldprofit = max(prices[i]-minoldprice, oldprofit);
            minnewprice = min(prices[i]-oldprofit, minnewprice);
            newprofit = max(prices[i]-minnewprice, newprofit);
        }
        return newprofit;
    }
};
