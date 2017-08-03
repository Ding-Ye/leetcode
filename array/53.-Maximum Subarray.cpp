class Solution {
public:
    int maxSubArray(int A[], int n) {
		int ans=A[0];
		int i, j;
		int sum = 0;
		
		for(i=0; i <n; i ++){
			sum +=A[i];
			ans = max(sum,ans);
			sum= max(sum,0);//???
		}
		
		return ans;
	}
}

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
		int i,j;
		int sum = 0;
		
		for(i=0; i <nums.size(); i++){
			sum += nums[i];
			ans = max(sum,ans);//在sum中大于0之中找更大的
			sum= max(sum,0);//要求sum必须是大于0的，
		}
		
		return ans;
    }
};

public class Solution {
    public int maxSubArray(int[] A) {
		int curMax = A[0];
		int preMax = A[0];
		preMax = Math.max(preMax+A[i],A[i]);
		curMax = Math.max(curMax,preMax);
	}
	return curMax;
}