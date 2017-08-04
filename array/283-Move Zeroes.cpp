///方法一
//时间复杂度O(n)
//空间复杂度O(n)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> nonZeroElements;

		for (int i = 0; i < nums.size(); i++) {
			if (nums[i]) {
				nonZeroElements.push_back(nums[i]);
			}
		}

		for (int i = 0; i < nonZeroElements.size(); i++)
			nums[i] = nonZeroElements[i];

		for (int i = nonZeroElements.size(); i < nums.size(); i++)
			nums[i] = 0;
    }
};


//方法二
//时间复杂度0(n)
//空间复杂度O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		
		int k = 0; //nums中，[0,k)的元素均为非0元素
		
		//遍历到第i个元素后，保证[0,i] 中所有非0元素
		//都按照顺序排列在[0，k)中
		for(int i = 0; i <nums.size(); i++)
			if(nums[i])
				nums[k++] = nums[i];
		
		//将nums剩余的位置放置为0
		for(int i = k; i < nums.size(); i ++)
				nums[i] = 0;
};


