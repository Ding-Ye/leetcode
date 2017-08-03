///1.如何判断边界
///2.提出循环不变量这个概念
#include<iostream>
#include<cmath>
#include<cassert>
#include<ctime>

using namespace std;

tempalte<typename T>
int binarySearch(T arr[], int n, T target){
	
	int l = 0, r = n - 1;//[l...r]的范围里寻找target
	while( l <= r){	//当 l == r 时，区间[l，r]依然是有效的
		int mid = (1+r)/2;
		if(arr[mid] == target)
			return mid;
		if(target > arr[mid])
			l = mid + 1;//target 在[mid+1,r]中
		else
			r = mid -1;//target 在[l,mid-1]中
	}
	
	return -1；//查找失败
}