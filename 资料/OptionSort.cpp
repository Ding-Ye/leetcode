template <typename T>
int __selection( T arr[], int l, int r, int k ){
	
	assert( k >= 0 && k < n );
    srand(time(NULL));
	
    if( l == r )
        return arr[l];

    // partition之后, arr[p]的正确位置就在索引p上
	int p = rand()%(r-l+1) + l;
    swap( arr[l] , arr[p] );

    int j = l; //[l+1...j] < p ; [lt+1..i) > p
    for( int i = l + 1 ; i <= r ; i ++ )
        if( arr[i] < arr[l] )
            swap(arr[i], arr[++j]);

    swap(arr[l], arr[j]);

 //   int p = __partition( arr, l, r );

    if( k == j )    // 如果 k == p, 直接返回arr[p]
        return arr[j];
    else if( k < j )    // 如果 k < p, 只需要在arr[l...p-1]中找第k小元素即可
        return __selection( arr, l, j-1, k);
    else // 如果 k > p, 则需要在arr[p+1...r]中找第k小元素
        return __selection( arr, j+1, r, k );
}
