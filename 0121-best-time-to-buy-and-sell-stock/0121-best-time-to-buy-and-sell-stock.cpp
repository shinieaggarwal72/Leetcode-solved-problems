class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*int buy, sell, profit=0;
        for(int i=0; i<prices.size(); i++){
            buy = prices[i];
            sell = buy;
            for(int j=i+1; j<prices.size(); j++){
                if(prices[j]>=sell)
                    sell = prices[j];
            }
            profit = max(profit,sell-buy);
        }
        cout << sell << " " << buy;
        return profit;*/

        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<minPrice)
                minPrice = prices[i];
            else if(prices[i]-minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;
        }
        return maxProfit;
        
    }
    
};