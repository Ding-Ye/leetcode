class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
		vector<int> hashtable(20001,0);
		
		for(size_t i = 0; i < nums.size(); i++ ){
			hashtable[nums[i] + 10000] ++;
		}
		
		int ret = 0;
		int flag   0;
		
		for(size_t i = 0; i < 20001;){
			if((hanstable[i]>0)&&(flag ==0)){
				ret = ret + i -10000;
				flag = 1;
				hanstable[i] --;
			}
			else if((hanstable[i]>0)&&(flag == 1)){
				hanstable[i] --;
				flag = 0;
			}
			else 
				i++;
		}
		return ret;
	}
}

//采用排序
class Solution {
public:
  int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i = 0; i < nums.size(); sum += nums[i], i += 2);
    return sum;
  }
};


