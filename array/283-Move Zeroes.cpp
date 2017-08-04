///方法二
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