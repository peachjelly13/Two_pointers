//Given two arrays arr1[0…m-1] and arr2[0..n-1], and a number x, the task is to find the pair arr1[i] + arr2[j] such that absolute value of (arr1[i] + arr2[j] //– x) is minimum.

//We are given two sorted arrays
//The approach is to take two pointer left which starts from the first index of array one and the right pointer which starts from the right of array 2
#include<bits/stdc++.h>
using namespace std;
void closest_pair(vector<int>&arr1, vector<int>&arr2,int n, int m, int x){
	//x - to find
	//n - sizeof arr1
	//m - sizeof arr2
	int left = 0;
        int right = m-1;
        int difference = INT_MAX;
        int left_val = -1;
        int right_val = -1;
	//we will not do left<right because the pointers are operating on two different arrays and the values can be very different
        while(left<n && right>=0)
	{
		if(abs(arr1[left]+arr2[right]-x)<difference){ //here we have to find the closeset pair to x that means this difference should be minimum
			difference = abs(arr1[left]+arr2[right]-x);
			left_val = left;right_val = right;
		}
		if(arr1[left]+arr2[right]<x){
			left++;
		}
		else{
			right--;
		}





	
	}
	cout << arr1[left_val] << " " << arr2[right_val];

}	
int main(){
	vector<int>v1 = {1,4,5,7};
	vector<int>v2 = {10,20,30,40};
	int m = v1.size();
	int n = v2.size();
	closest_pair(v1,v2,m,n,12);

}






