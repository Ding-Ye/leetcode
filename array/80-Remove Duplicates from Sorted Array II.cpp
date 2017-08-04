//双指针，1指针是loc，2指针是idx
//如果有三个数相等，那么loc和idx都会加1，把idx的值附给loc
//如果没有三个数全相等，那么loc不变，idx会加1，把idx的值附给loc
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums == null || nums.size() <= 2)
			return nums.size();
		
		int loc = 2;
		for(int idx = 2; idx <nums.size(); idx ++){
			if(!(nums[loc-2] == nums[loc-1] && nums[loc-1] == nums[idx]))
				nums[loc++] = nums[idx];
		}
		return loc;
    }
};