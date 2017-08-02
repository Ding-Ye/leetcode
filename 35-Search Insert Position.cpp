class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
		int cnt = 0;
		for(i =0; i <nums.size(); i ++){
			if((target-nums[i])>0)
				cnt ++;
			
			else if((target-nums[i]) == 0);
			
			else{
				for(int j =nums.size(); i>cnt; i--){
					nums[j] = nums[j-1];
					nums[cnt] = target;
				}
			}
				
		}
        return cnt;
    }
};

//被人的优秀代码,用二分法
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
		int  low = 0；
		int  high = nums.size()-1;
		
		
		
		
		