#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int cnt = 0;
		for (int i = 0; i <nums.size()-cnt; i++) {//检查出0之后，一定要改变数组长度
			if (0 == nums[i]) {
				cnt++;
				for (int j = i; j < nums.size(); j++) {
					nums[j] = nums[j + 1];
				}
				nums[nums.size() - 1] = 0;
				
			}
			break;
		}

	}
};

int main()
{
	int arr[] = {0,0,1};
	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

	Solution().moveZeroes(vec);

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;

	return 0;
}