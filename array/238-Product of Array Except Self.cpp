class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        int mul = 1;
        for(int i = 0; i < nums.size(); i++){
        	mul *= nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
        	result[i] = mul/nums[i];
        }

        return result;
    }
};

//方法二
class Solution{
public:
	vector<int>  productExceptSelf(vector<int>& nums) {
		vector<int> v(nums.size());
		int right = 1;
		v[0] = 1;
		//v[i]左边所有数字的乘积
		for(int i = 1; i < nums.size(); i++){
			v[i] = nums[i-1] * v[i-1];
		}

			//v[i]右边所有数字的乘积
		for(int i = nums.size() - 2; i >= 0; i--){
			right = right * nums[i+1];
			v[i] = v[i] * right;
		}
		return v;
	}
};

//方法三
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int fromleft = 1, fromright = 1, n = nums.size();
        vector<int> res(n, 1);
        for(int i = 0; i < n; i++)
        {
             res[i] *= fromleft;
            fromleft *= nums[i];
            res[n - i - 1] *= fromright;
            fromright *= nums[n - i - 1];
        }
           
        return res;
        
    }
};