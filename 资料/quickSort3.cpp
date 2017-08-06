
template<typename T>
void __quickSort3Ways(T arr[], int l ,int r){
	
	if(r-l <= 15){
		insertionSort(arr, l, r);
		return;
	}
}



template <typename T>
void quickSort3Ways(T arr[], int n){
	
	srand(time(NULL));
	__quickSort3Ways(arr, 0, n-1);
}