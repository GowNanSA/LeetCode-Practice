// time complexity is O(n) linear because it goes through the array once

class Solution {
public:
    int maxProfit(vector<int>& prices) {
 
        int maxInt = INT_MAX;
        int maxProfit = 0;
        int minPrice = prices[0];

        if(prices.size()<2){
            return 0; 
        }

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < maxInt){
                maxInt = prices[i];
            }
            minPrice = prices[i] - maxInt;
            if(maxProfit < minPrice){
                maxProfit = minPrice;
            }
        }
        return maxProfit;
    }
};