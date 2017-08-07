//* VS不支持动态长度数组, 即不能使用 T aux[r-l+1]的方式申请aux的空间
//* 使用VS的同学, 请使用new的方式申请aux空间
//* 使用new申请空间, 不要忘了在__merge函数的最后, delete掉申请的空间:
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
		if(nums1[m-1] <= nums2[0]){//如果nums1最后一个数小于nums2最开始的一个数
			for(int i = 0 ; i < n; i++){
				nums1[m+i] = nums2[i];
			}
		}
		
		int j = 0;
		int k = 0;
        int *a[] = new int[m];
		for(int i = 0 ; i <m; i++){
			a[i]= nums1[i];
		}
		
		for(int i = 0 ; i <n+m; i ++){
			if(j > m-1){// 如果左半部分元素已经全部处理完毕
				nums1[i] = nums2[k];
				k++;
			}
			
			else if(k > n-1){// 如果右半部分元素已经全部处理完毕
				nums1[i] = a[j];
				j++;
			}
			
			else if(a[j] < nums2[k]){// 左半部分所指元素 < 右半部分所指元素
				nums1[i] = a[j];
				j++;
			}
			
			else{ // 左半部分所指元素 >= 右半部分所指元素
				nums1[i] = nums2[k];
				k++;
			}
				
		}
    }
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, tar = m + n - 1;
        while (j >= 0) {
            (nums1[tar--] = i >= 0 && nums1[i] )> nums2[j] ? nums1[i--] : nums2[j--];
        }
    }
};











