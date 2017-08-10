class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int *aux = new int[k+1];
		int n = nums.size();
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