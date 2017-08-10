int partition(vector<int>& nums, int l, int r){
	swap(nums[l], arr[rand()%(r-l)+1]);
	int v = nums[l];
	int j = l;
	for(int i = l + 1; i <= r; i++){
		if(nums[i] < v){
			j++
			swap(nums[j], nums[i]);
		}
		
		swap(nums[l], nums[j]);
		
		return j;
	}
	
}



void quickSort(vector<int>& nums, int l, int r){
	srand(time(NULL));
	swap(nums[l], arr[rand()%(r-l)+1]);
	int v = nums[l];
	int j = l;
	for(int i = l + 1; i <= r; i++){
		if(nums[i] < v){
			j++
			swap(nums[j], nums[i]);
		}
		
		swap(nums[l], nums[j]);
	}
	int p = j;
	quickSort(nums, l, p-1);
	quickSort(nums, p+1, r);
}