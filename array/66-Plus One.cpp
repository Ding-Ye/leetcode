//java 版本
public int[] plusOne(int[] digits){
	
	int n = digits.length;
	for(int i = n-1; i >=0; i--){//如果个位小于9，只要个位加1就行了
		if(digits[i] < 9){
			digits[i]++;
			return digits;
		}
		
		digits[i] = 0;
	}
	
	int[] newNumber = new int [n+1];
	newNumber[0] = 1;
	
	return newNumber;
}

//c++版本
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
    int n = digits.size();
	for(int i = n-1; i >=0; i--){//如果个位小于9，只要个位加1就行了
		if(digits[i] < 9){
			digits[i]++;
			return digits;
		}
		
		digits[i] = 0;
	}
	
	int *newNumber = new int [n+1];
	newNumber[0] = 1;
    for (int i = 1; i < n + 1; i++) {
		newNumber[i] = 0;
	}
        
	vector<int> vec(newNumber, newNumber + n + 1);
	return vec;  
    }
};

//版本c++二
class Solution {
public:
vector<int> plusOne(vector<int>& digits) {
		
		int n = digits.size();
		for(int i = n-1; i >= 0; --i){
			if(digits[i] == 9){
				digits[i] = 0;
			}
			else{
				digits[i] ++;
				return;
			}
		}
		
		digits[0] = 1;
		digits.push_back(0);
	}
}；






















