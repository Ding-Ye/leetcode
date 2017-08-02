class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		int i;
		int count = 0;
		int n = nums.size();
		for(i=1; i < n; i++){
			if(nums[i-1] != val){
				nums[i] = nums[i-1];
				count ++;
			}
		}
		
		return n-count;
    }
};

int removeElement(vector<int>& nums, int val){
	int cnt = 0;
	for(int i = 0; i < num.size(); i++){
		if(nums[i] == val)
			cnt ++;
		else
			nums[i-cnt] = nums[i];//数组删除的关键在于二者之差是cnt
	}
	return nums.size - cnt;
}



class Solution {
public:
    int removeElement(vector<int>& nums, int val){
		int elems = 0;
		for(int i = 0; i < num.size(); i ++){
			if(nums[i] != val)
				nums[elsems++] = nums[i];//数组删除的关键在于二者之差是cnt
		}
		return elems;
	}












