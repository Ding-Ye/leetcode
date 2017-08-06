//计算逆序数对的结构以long long 返回
//对于一个大小为N的数组，其最大的逆序数对个数为N*（N-1)/2,非常容易产生整型溢出

long long __merge(int arr[], int l , int mid, int r){
	
	int *aux = new int[r-l+1];
	for(int i = l; i <= r; i++)
		aux[i-l] = arr[i];
	
	//初始化逆序数对个数 res = 0;
	long long res = 0;
	
	int j = l, k = mid + 1;
	
	for(int i = l ; i <=r; i++){
		if(j > mid){
			arr[i] = aux[k-1];
			k++;
		}
		else if(k>r){
			arr[i] = aux[j-l];
			j++;
		}
		else if(aux[j-l] <= aux[k-l]){
			arr[i] = aux[j-l];
			j++;
		}
		
		else{
			arr[i] = aux[k-l];
			k++;
			// 此时, 因为右半部分k所指的元素小
            // 这个元素和左半部分的所有未处理的元素都构成了逆序数对
            // 左半部分此时未处理的元素个数为 mid - j + 1
		    res += (long long)(mid - j +1);
		}
	}
	
	delete[] aux;
	
	return res;
}
//求arr[l,r]范围的逆序数对个数
long long __inversionCount(int arr[], int l , int r){
	
	if(l >= r)
		return 0;
	
	int mid = l + (r-l)/2;
	
	//求出arr[l,mid]范围的逆序数
	long long res1 = __inversionCount(arr, 1, mid);
	//求出arr[mid+1,r]范围的逆序数
	long long res2 = __inversionCount(arr, mid+1, r);
	
	return res1 + res2 + __merge(arr, l, mid, r);
}

//递归求arr的逆序数对个数
long long inversionCount(int arr[], int n){
	
	return __inversionCount(arr, 0, n-1);
}