#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int i;
		int cnt = 0;
		for (i = 0; i <nums.size(); i++) {
			if ((target - nums[i]) > 0) {
				cnt++;
				if (cnt++ == nums.size())
					nums[cnt] = target;
			}
				

			else if ((target - nums[i]) == 0);

			else {
				for (int j = nums.size(); i>cnt; i--) {
					nums[j] = nums[j - 1];
					nums[cnt] = target;
				//nums.insert(nums[cnt], target);
				}
			}

		}
		return cnt;
	}
};

int main()
{
	int A[] = { 1, 3 };
	vector<int> a(&A[0], &A[1]);
	Solution Solution;
	int b = Solution.searchInsert(a,4);

	cout << b << endl;
	for (int j = 0; j <a.size(); j++) {
		cout << a[j] << endl;
	}

	return 0;
}