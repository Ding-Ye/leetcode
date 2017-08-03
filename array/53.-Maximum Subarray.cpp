class Solution {
public:
    int maxSubArray(int A[], int n) {
		int ans=A[0];
		int i, j;
		int sum = 0;
		
		for(i=0; i <n; i ++){
			sum +=A[i];
			ans = max(sum,ans);
			sum= max(sum,0);
		}
		
		return ans;
	}
}