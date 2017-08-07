#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

		int i = m - 1, j = n - 1, tar = m + n - 1;
		while (j >= 0) {
			nums1[tar--] = ( i >= 0 && nums1[i] > nums2[j] )? nums1[i--] : nums2[j--];

			for (int k = 0; k < nums1.size(); k++)
				cout << nums1[k] << " ";
			cout << endl;
		}
	}
};
int main() 
{
	int arr1[] = { 1, 2, 3, 0, 0, 0 };
	int arr2[] = { 4, 5, 6};
	vector<int> vec1(arr1, arr1 + sizeof(arr1) / sizeof(int));
	vector<int> vec2(arr2, arr2 + sizeof(arr2) / sizeof(int));
	Solution().merge(vec1, 3, vec2, 3);
	return 0;
}












