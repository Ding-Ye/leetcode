//Brute ForceBrute Force
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
		for(int i = 0; i < n ; i ++)
			for(int j = i+1; j < n; j++){
				if((j - i) > k)
					break;
				else if(nums[i] == nums[j] && (j - i) <= k)
					return true;
			}
			 return false;
    }
};

//方法二：哈希表
class Solution{
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k)
	{
		unordered_set<int> s;//
		
		if(k <= 0)
			return false;
		if(k >= nums.size())
			k = nums.size() - 1;//思维严谨
		
		for(int i = 0; i < nums.size(); i++){
			if(i > k) s.erase(nums[i - k -1]);//删除元素
			if(s.find(nums[i]) != s.end())
				return true;
			s.insert(nums[i]);
		}
		return false;
	}
}











































