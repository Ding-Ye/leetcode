class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0; i <nums.size(); i ++){
			 return nums.size() > set<int>(nums.begin(), nums.end()).size(); 
		}
    }
};

//方法二：用哈希表
public boolean containsDuplicate(int[] nums){
	
	final Set<Integer> distinct = new HashSet<Integer>();
	for(int num : nums){
		if(distinct.contains(num))
			return true;
		
		distinct.add(num);
	}
	return false;
}