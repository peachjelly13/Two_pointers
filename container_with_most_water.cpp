//You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

//Find two lines that together with the x-axis form a container, such that the container contains the most water.

//Return the maximum amount of water a container can store.

//Notice that you may not slant the container.

#include<bits/stdc++.h>
using namespace std;

void container(int arr[], int n){
	int left = 0;
	int right = n-1;
	int max_ = 0;
	while(left<right){
		int left_height = arr[left];
		int right_height = arr[right];
		int height_ = min(left_height,right_height);
		int value = (right-left)*height_;
		max_ = max(max_,value);
		if(left_height<right_height){
			left++;
		}
		else{
			right--;
		}

	}
	cout << max_;
}
int main(){
	int arr[] = {1,8,6,2,5,4,8,3,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	container(arr,size);
}
		
