// partition 过程, 和快排的partition一样
template<typename T>
int __partition(T arr[], int l , int r){
	
	int p = rand()%(r-l+1) + l;
	swap(arr[l], arr[p]);
	
	int j = l; //[l+1,j] <p ;[j+1,i] >p
	for(int i = l+1; i <= r; i++)
		if(arr[i] < arr[l])
			swap(arr[i], arr[++j]);
		
	swap(arr[l], arr[j]);

	return j;	
		
}


//求出arr[l,r]范围里第k小的数
template<typename T>
int __selection(T arr[], int l, int r, int k){
	
	if( l == r)
		return arr[l];

//partition 之后，arr[p]的正确位置就在索引p上	
	int p = __partition(arr, l, r);
	
	if( k==p )
		return arr[p];
	else if( k < p )
		return __selection(arr, l, p-1, k);
	else
		return __selection(arr, p+1, r, k);
}


//寻找arr数组中第K小的元数
template<typename T>
int selection(T arr[], int n, int k){
	
	assert(k >= 0 && k < n);
	
	srand(time(NULL));
	return __selection(arr, 0, n-1, k);
}