//Given an array arr[] of size n and an integer X. Find if there’s a triplet in the array which sums up to the given integer X.
#include<bits/stdc++.h>
using namespace std;

//This is very similar to sum equal to 0 or not question

void three_sum(int arr[],int n,int x){
	int left;
	int right;
	sort(arr,arr+n); //this can only be applied on a sorted array because our conditions work on a sorted array only
	for(int i =0;i<n;i++){
		int y = arr[i];
		left = i+1;
		right = n-1;
		while(left<right){
			if(arr[left]+arr[right]+y==x){
				cout << arr[left] << " " << arr[right] << " " << y << endl;
				right--;
				left++;
			}
			else if(arr[left]+arr[right]+y<x){
				left++;
			}
			else{
				right--;
			}
		}
	}

}
int main(){
    int arr[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    three_sum(arr, arr_size, sum);
}



