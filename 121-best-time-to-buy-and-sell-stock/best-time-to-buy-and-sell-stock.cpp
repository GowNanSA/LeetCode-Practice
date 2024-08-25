// time complexity is O(n) linear because it goes through the array once

class Solution {
public:
    int maxProfit(vector<int>& prices) {
 
    
        int maxProfit = 0;
        int minPrice = prices[0];

        if(prices.size()<2){ // if too small return 
            return 0; 
        }

        // for price in prices 
        for(int i = 0; i < prices.size(); i++){
            
            if(prices[i] < minPrice){ 
                minPrice = prices[i]; // set minimum price
            }
            else{
                maxProfit = max(maxProfit, prices[i] - minPrice);
            } 
            
        }


        return maxProfit;
    }
};