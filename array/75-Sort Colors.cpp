class Solution {
public:
//时间复杂度：O(N)
//空间复杂度：O(l)
    void sortColors(vector<int>& nums) {
        
		int count[3] = {0};//存放0,1,2三个元素的频率
		for(int i = 0; i < nums.size(); i++){
			assert( nums[i] >= 0 && nums[i] <= 2);
			count[nums[i]] ++;
		}
		
		int index = 0;
		for(int i = 0; i < count[0]; i++)
			nums[index++] = 0;
		for(int i = 0; i < count[1]; i++)
			nums[index++] = 1;
		for(int i = 0; i <count[2]; i++)
			nums[index++] = 2;
    }
};