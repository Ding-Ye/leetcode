//快速排序算法
//方法一：先排序再检索
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
};		

//方法二
//STL中的nth_element()方法的使用 通过调用nth_element(start, start+n, end) 方法可以使第n大元素处于第n位置（从0开始,其位置是下标为 n的元素），			
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
		
        nth_element(nums.begin(), nums.begin()+(nums.size() - k), nums.end());
        return nums[nums.size() - k];
    }
};

//方法三
//使用快速排序
class Solution{
public:
	int partition(vector<int>&nums, int left, int right){
		
		int pivot = nums[left];
		int l = left +1, r = right;
		
		while( l <= r){
			if(nums[l] < pivot && nums[r] > pivot)
					swap(nums[l++], nums[r--]);
			if(num[l] >= pivot)
				l++;
			if(nums[r] <=pivot)
				r--;
		}
		swap(num[left], nums[r]);
		return r;
	}
	
	int findKthLargest(vector<int>& nums, int k){
		
		int left = 0;, right = nums.size()-1;
		while(true){
			int pos = partition(nums, left, right);
			
			if(pos == k-1) 
				return nums[pos];//用return来结束循环
			
			if(pos > k-1)
				right = pos - 1;
			else 
				left = pos + 1;
				
		}
	}
		
}






















