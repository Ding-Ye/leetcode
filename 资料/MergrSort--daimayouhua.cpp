template<typename  T>
void __merge(T arr[], int l, int mid, int r){
		T aux[r-mid];
		for(int i = 0; i < r-mid; i++){
			aux[i] = arr[i+mid];
		}
		
		int i = mid-1, j = r-mid-1, tar = r-l+1;
		
		while(j>=0){
			arr[tar--] = i >= 0 && arr[i] > aux[j] ? arr[i--] : aux[j--];
		}