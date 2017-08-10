//采用随机快速排序，然后取n/2这个数组返回
class Solution {
public:
    int majorityElement(vector<int>& nums) {
		int n = nums.size();
        quickSort(nums.begin,nums.end);
		int mE = nums[n/2];
		return mE;
    }
};

//java 版本
public class Solution{
	public int majorityElement(int[] num){
		for(int i = 1; i <num.length; i ++){
			if(count == 0){
				count ++;
				major = num[i];
			}
			
			else if(major == num[i]){
				count ++;
			}
			
			else
				count --;
		}
		return major;
	}
};

//c++版本
class Solution {
public:
    int majorityElement(vector<int>& nums){
		 int major = nums[0];
		 int count = 1;
		 for(int i = 0; i <nums.size(); i ++){
			  if(count == 0){
				  count ++;
				  major = nums[i];
			  }
			  else if(count == nums[i]){
				  count ++;
			  }
			  else
				  count --;
		 }
		return major;
   }
};











