#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:

	int removeDuplicates(vector<int> &A) {
		// write your code here
		int count = 0;
		int n = A.size();
		for (int i = 1; i < n; i++) {
			if (A[i] != A[count]) {
				count++;
				A[count] = A[i];
			}
		}
		
		return count + 1;
	}
};

int main()
{
	int A[] = { 1, 1, 2, 2,3 };
	vector<int> a(&A[0], &A[4]);
	Solution Solution;
	int b = Solution.removeDuplicates(a);

	cout << b << endl;

	for (int j = 0; j <a.size(); j++) {
		cout << a[j] << endl;
	}

	return 0;
}
