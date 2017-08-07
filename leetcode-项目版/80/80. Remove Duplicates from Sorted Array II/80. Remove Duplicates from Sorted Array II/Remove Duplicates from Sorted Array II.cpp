#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() <= 2)
			return nums.size();

		int loc = 2;
		for (int idx = 2; idx <nums.size(); idx++) {
			if (!(nums[loc - 2] == nums[loc - 1] && nums[loc - 1] == nums[idx]))
				nums[loc++] = nums[idx];
			for (int i = 0; i < nums.size(); i++) {
				cout << nums[i] << " ";
			}
			cout << endl;
		}
		return loc;
	}
};

int main()
{
	int arr[] = { 1, 2, 2, 2, 3, 4 };
	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

	Solution().removeDuplicates(vec);
	return 0;
}