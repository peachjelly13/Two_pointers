//Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.

#include<bits/stdc++.h>
using namespace std;

bool sum_equal_to_x(vector<int>&arr,int n,int x){
	int left = 0;
	int right = n-1;
	while(left<right){
		if(arr[left]+arr[right] == x){
			return true;
		}
		if(arr[left]+arr[right]<x){
			left++;
		}
		else{
			right--;
		}

	}
	return false;


}
int main(){
	vector<int>v = {1,2,3,4,5,6,7,8,9,10};
	bool val = sum_equal_to_x(v,v.size(),30);
	cout << val;

}
