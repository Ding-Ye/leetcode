template<typename T>
void __quickSort3Ways(T arr[], int l ,int r){
	
	if(r-l <= 15){
		insertionSort(arr, l, r);
		return;
	}
	
	//partition
	swap(arr[l], arr(rand()%(r-l+1)+l));
	T v = arr[l];
	
	int lt = l;//arr[l+1,lt] < v
	int gt = r + 1;//arr[gt,r] < v
	int i = l + 1; //arr[lt+i,i] == v
	while(i < gt){
		if(arr[i] < v){
			swap(arr[i], arr[lt+1]);
			lt ++;
			i ++;
		}
		
		else if(arr[i] > v){
			swap(arr[i], arr[gt-1]);
			gt --;
		}
		else//arr[i] == v
				i++;
	}
	
	swap(arr[l], arr[lt]);
}



template <typename T>
void quickSort3Ways(T arr[], int n){
	
	srand(time(NULL));
	__quickSort3Ways(arr, 0, n-1);
}