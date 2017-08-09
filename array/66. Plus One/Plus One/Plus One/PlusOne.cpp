#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
	/**
	* @param digits a number represented as an array of digits
	* @return the result
	*/
	vector<int> plusOne(vector<int>& digits) {
		int n = digits.size();
		for (int i = n - 1; i >= 0; i--) {//如果个位小于9，只要个位加1就行了
			if (digits[i] < 9) {
				digits[i]++;
				return digits;
			}

			digits[i] = 0;
		}

		int *newNumber = new int[n + 1];
		newNumber[0] = 1;
		for (int i = 1; i < n + 1; i++) {
			newNumber[i] = 0;
		}

		for (int i = 0; i < n+1; i++)
			cout << newNumber[i] << " ";
		cout << endl;

		vector<int> vec(newNumber, newNumber + n +1);
		for (int i = 0; i < vec.size(); i++)
			cout << vec[i] << " ";
		cout << endl;
		return vec;
	}
};

int main() {
	int a[] = { 9, 9 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	Solution().plusOne(vec);
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;


	return 0;
}