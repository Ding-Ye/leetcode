class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int profit = 0;
		
		if(prices.size() == 0)
            return profit;

		for(int i = 0; i < prices.size() - 1; i ++){
			if(prices[i+1] > prices[i] ){
				profit += prices[i+1] - prices[i];
			}
		
		}
		
		return profit;
	}
};
