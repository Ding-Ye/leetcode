//方法一：
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int *aux = new int[k+1];
		int n = nums.size();
		if(k > n && k < 0)
			k = 0;
		for(int i = 0; i < k+1; i ++){
			aux[i] = nums[i];
		}
		
		for(int i = k + 1; i < n; i ++ ){
			nums[i-k-1] = nums[i];
		}
		
		for(int i = n-1-k; i <n; i ++){
			nums[i] = aux[i-n+1+k];
		}
		
    }
};

//方法二:
class Solution{
public:
	void rotate(vector<int>& nums, int k){
		int n = nums.size();
		k = k % n; //k对n取余数
		for(int i = 0; i <=(n - 1 - k)/2; i++){
			swap(nums[i], nums[n-1-k-i]);
		}
		for(int i = n - k; i <= (n-1 + n-k)/2; i++){
			swap(nums[i], nums[n - 1 + n - k - i]);
		}
		for(int i = 0; i <= (n - 1)/2; i++){
			swap(nums[i], nums[n - 1 - i]);
		}
	}
};

//方法三：
class Solution{
public:
	void rotate (vector<int>& nums, int k){
		int n = nums.size();
		if(k == n | k == 0)
			return;
		k %= n; //k = k % n;
		reverse(nums.begin(), nums.begin() + n - k); //reverse 就是反转
		reverse(nums.begin() + n - k, nums.end());
		reverse(nums.begin(), nums.end());
	}
};



























