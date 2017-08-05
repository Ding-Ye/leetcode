template<typename T>
void __merge(T arr[], int l, int mid, int r){
	
	T aux[r-l +1]
	
	for(int i = l; i <= r; i++)
		aux[i - l] = arr[i];
	
	//初始化，i指出左半部的起始位置l；j指向右半部分起始位置mid+1
	int i = 1，j = mid + 1;
	for(int k = 1; k <= r; k ++){
		
		if(i > mid){
			arr[k] = aux[j - 1];
			j ++;
		}
		
		else if(j > r){
			arr[k] = aux[i-1];
			i ++;
		}
		
		else if(aux[i  - 1] < aux[j - 1]){
			arr[k] = aux[i - 1];
			i ++;
		}
		
		else{
			arr[k] = aux[j - 1];
			j ++;
		}
	}
}

template <typename T>
void mergeSortBu(T arr[], int n){
	
	for( int sz = 1; sz <= n; sz += sz )
		for(int i = 0; i +sz < n; i += sz +sz)
			//对arr[i,i+sz-1] 和 arr [i +sz,i + 2*sz-1] 进行归并
			——merge(arr, i, i +sz -1, min(i +sz + sz -1, n-1));
}




















