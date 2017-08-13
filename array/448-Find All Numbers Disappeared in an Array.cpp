class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
		vector<int> find;
		int k =0;
        set <int> a;
		for(int num:nums){
			a.insert(num);
		}
		set <int> :: iterator it;
		for(it = a.begin(); it != a.end(); it++){
			int i = 1;
			if(i == *it)
				i++;
			else{
				find[k] = i;
			    k++;
				it--;
			}
		}
		return find;
    }
};