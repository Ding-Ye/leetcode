//最开始的思考
//时间复杂度0(n^2)
//空间复杂度O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int i = 0;
		int profit = 0;
		if(a[i+1] <=a[i] && (i+1) < prices.size()){
			i ++;
			if( i == (prices.size()-1))
				return profit;
		}
			
		
        for(int i = 0; i < prices.size(); i ++){
			for(int j = i+1; j < prices.size(); j++){
				if(prices[j]-prices[i]>0){
					profit = max(profit, prices[j]-prices[i]);
				}
					
			}
		}
		
		return profit;
    }
};

//方法二
//用双指针
class Solution {
public:
    int maxProfit(vector<int>& prices){
		int maxPro = 0;
		int minPrice = INT_MAX; //minPrice is the minimum price from day 0 to day i
		for(int i = 0; i < prices.size(); i++){
			minPrice = min(minPrice,prices[i]);
			maxPro   = max(maxPro, prices[i] - minPrice);
		}
		return maxPro;
	}
}；



















