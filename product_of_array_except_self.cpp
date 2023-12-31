//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
//You must write an algorithm that runs in O(n) time and without using the division operation.
//Input: nums = [1,2,3,4]
//Output: [24,12,8,6]
#include<bits/stdc++.h>
using namespace std;
void product_of_array_except_self(int arr[],int n){
	int product = 1;
	vector<int>v(n,1);
	for(int i =0;i<n;i++){		
		product *= arr[i];
		v[i] = product;
	}
	product = 1;
	for(int i =n-1;i>0;i--){
		v[i] = v[i-1] * product;
		product *= arr[i];
	}
	v[0] = product; // because the product doesnt have v[0] 
			// what we did here is take the multiplication of the left side of the array and the multiplication of the right side of the array
	for(int i =0;i<v.size();i++){
		cout << v[i] << endl;
	}
}
int main(){
	int nums[] = {1,2,3,4};
	int size = sizeof(nums)/sizeof(nums[0]);
	product_of_array_except_self(nums,size);
}


