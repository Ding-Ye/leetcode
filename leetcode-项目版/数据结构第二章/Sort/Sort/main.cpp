#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"

using namespace std;


template<typename T>
void shellSort(T arr[], int n) {

	// ���� increment sequence: 1, 4, 13, 40, 121, 364, 1093...
	int h = 1;
	while (h < n / 3) {
		h = 3 * h + 1;
		cout << h << endl;
	}

	while (h >= 1) {

		// h-sort the array
		for (int i = h; i < n; i++) {

			// �� arr[i], arr[i-h], arr[i-2*h], arr[i-3*h]... ʹ�ò�������
			T e = arr[i];
			int j;
			for (j = i; j >= h && e < arr[j - h]; j -= h)
				arr[j] = arr[j - h];
			arr[j] = e;

		}
		for (int k = 0; k < n; k++)
			cout << arr[k] << " ";
		cout << endl;

		h /= 3;
	}

}

// �Ƚ�SelectionSort, InsertionSort��BubbleSort��ShellSort���������㷨������Ч��
// ShellSort�������������㷨���������ŵ������㷨
int main() {

	//int n = 10;

	//// ����1 һ�����
	//cout << "Test for random array, size = " << n << ", random range [0, " << n << "]" << endl;

	//int *arr1 = SortTestHelper::generateRandomArray(n, 0, n);
	//int *arr2 = SortTestHelper::copyIntArray(arr1, n);
	//int *arr3 = SortTestHelper::copyIntArray(arr1, n);
	//int *arr4 = SortTestHelper::copyIntArray(arr1, n);

	//SortTestHelper::testSort("Selection Sort", selectionSort, arr1, n);
	//SortTestHelper::testSort("Insertion Sort", insertionSort, arr2, n);
	//SortTestHelper::testSort("Bubble Sort", bubbleSort, arr3, n);
	//SortTestHelper::testSort("Shell Sort", shellSort, arr4, n);

	//delete[] arr1;
	//delete[] arr2;
	//delete[] arr3;
	//delete[] arr4;



	//// ����2 ���Խ������������
	//int swapTimes = 100;

	//cout << "Test for nearly ordered array, size = " << n << ", swap time = " << swapTimes << endl;

	//arr1 = SortTestHelper::generateNearlyOrderedArray(n, swapTimes);
	//arr2 = SortTestHelper::copyIntArray(arr1, n);
	//arr3 = SortTestHelper::copyIntArray(arr1, n);
	//arr4 = SortTestHelper::copyIntArray(arr1, n);

	//SortTestHelper::testSort("Selection Sort", selectionSort, arr1, n);
	//SortTestHelper::testSort("Insertion Sort", insertionSort, arr2, n);
	//SortTestHelper::testSort("Bubble Sort", bubbleSort, arr3, n);
	//SortTestHelper::testSort("Shell Sort", shellSort, arr4, n);

	//delete[] arr1;
	//delete[] arr2;
	//delete[] arr3;
	//delete[] arr4;

	int a[] = { 49,38,65,97,76,13,27,45,55,4 };
	shellSort(a, 10);

	return 0;
}