class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long n = nums.size();
        return n * (n+1) / 2 - accumulate(begin(nums), end(nums), 0);
    }
};

//方法二：采用位运算 异或
class Solution{
public:
	int missingNumber(vector<int>& nums){
		int result = nums.size();
		int i = 0;
		
		//A ^ B ^ B = A   这里运用这一点，如果num和i相等，那么result不变
		for(int num:nums){
			result ^= num;//
			result ^= i;
			i++;
		}
		
		return result;
	}
	
}











