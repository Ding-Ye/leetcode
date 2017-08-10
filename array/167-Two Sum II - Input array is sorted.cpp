//方法一：用双重循环
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
	
        for(int i = 0; i <numbers.size(); i++)
			for(int j = i +1 ; i <numbers.size(); j++){
				if((target-numbers[i]) == numbers[j])
						return [i+1,j+1];
				
			}
    }
};

//Java版本 二分法
class Solution {
public int[] twoSum(int[] num, int target){
	int[] indice = new int[2];
	if(num == null || num.length < 2)
		return indice;
	
	int left = 0;
	int right = num.length - 1;
	while(left < right){
		int v = num[left] + num[right];
		if(v == target){
			indice[0] = left + 1;
			indice[1] = right + 1;
			break;
		}
		
		else if(v > target){
			right --;
		}
		
		else {
			left ++;
		}
	}
}
    
};

//c++ 版class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
	int *indice = new int[2];	
	int left = 0;
	int right = numbers.size() - 1;
	while(left < right){
		int v = numbers[left] + numbers[right];
		if(v == target){
			indice[0] = left + 1;
			indice[1] = right + 1;
			break;
		}
		
		else if(v > target){
			right --;
		}
		
		else {
			left ++;
		}
	}
	
	vector<int> twoSum(indice,indice+1);
	return twoSum;	
	
}；




































