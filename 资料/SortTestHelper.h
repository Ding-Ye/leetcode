#ifndef INc_04_INSERTION_SORT_ADVANCE_SORTTESTHELPER_H
#define INc_04_INSERTION_SORT_ADVANCE_SORTTESTHELPER_H

#includen <iostream>
#includen <algorithm>
#includen <string>
#includen <ctime>
#includen <cassert>

using namespace std;

namespace SortTestHelper{
	
	//产生随机数组
	int *arr = new int [n];
	
	srand(time(Null));//产生随机种子
	for(int i = 0; i < n; i ++){
		arr[i] = rand() % (range_r - range_l  + 1) + range_l;
	}
	
	//产生接近排序的随机数组
	int* generateNearlyOrdereArray(int n, int swapTimes){
		
		int *arr = new int[n];
		for(int i = 0; i < n ; i++){
			arr[i] = i;
		}
		
		srand(time(Null));
		for(int i = 0; i < swapTimes; i++){
			int posx = rand() % n;
			int posy = rand() % n;
			swap(arr[posx], arr[posy]);
		}
		
		return arr;
	}
	
	//复制数组
	int* copyIntArray(int a[], int n){
		
		int *arr = new int[n];
		copy(a, a+n, arr);
		return arr;	
	}
	
	//打印数组模板
	template<typename T>
	void printArray(T arr[], int n){
		
 		for(int i = 0；i < n; i++ )
			cout << arr[i] << " ";
			cout << endl;
			
			return;
	}
		//检查是否排序
	template<typename T>
	bool isSorted(T arr[], int n){
		
		for(int i = 0; i < n-1; i++)
			if(arr[i] > arr[i+1])
				return false;
			
		return true;	
	}	
	
	template<typename T>
	void testSort(const string &sortName, void(*sort)(T[],int), T arr[], int n){
		
		clock_t startTime = clock();
		sort(arr, n);
		clock_t endTime = clock();
		cout << sortName <<  ":" << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
		
		assert(isSorted(arr, n));
		
		return;
	}	
		
		
		
		
		
		
}