//Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.
#include<bits/stdc++.h>
using namespace std;
void subarray_product_lesser_than_k(vector<int>&nums,int k){
	int n = nums.size();
	int left = 0; //incremeneted when we remove an element 
	int count = 0;
	int product = 1;
	for(int i =0;i<n;i++){
		product*= nums[i];
		while(product>=k){
			product = product / nums[left];
			left++;
		}
		if(product<k){
			count += i-left+1;
		}
	
	}
	cout << count;
}
int main(){
	vector<int>nums = {10,5,2,6};
	int k = 100;
	subarray_product_lesser_than_k(nums,k);
}


