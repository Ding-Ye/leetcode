//将arr[i,mid]和arr[mid+1,r]两部分进行归并
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

//递归使用归并排序，对arr[l,r]的范围进行排序
tempalte<typename T>
void __mergeSort(T arr[], int l , int r){
	
	if(l >= r)
		return;
	
	int mid = l + (r-l)/2;
	__mergeSort(arr, 1, mid);
	__mergeSort(arr,mid+1,r);
	if(arr[mid] > arr[mid+1])
		__merge(arr, 1 , mid, r);
}




tempalte<typename T>
void mergeSort(T arr[], int n){
	__mergeSort(arr, 0 , n-1);
}
