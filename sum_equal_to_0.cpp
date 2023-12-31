//Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.
#include<bits/stdc++.h>
using namespace std;

void findTriplets(int arr[],int n){
	bool triplet = false;
	sort(arr,arr+n);
	for(int i =0;i<n;i++){
		int left = i+1;
		int right = n-1;
		int x = arr[i];
		while(left<right){
			if(arr[left]+arr[right]+x==0){
				cout << arr[left] << " " << arr[right] << " " << x << endl;
				left++;
				right--;
				triplet = true;
			}
			else if(x+arr[left]+arr[right]<0){
				left++;
			}
			else{
				right--;
			}


	}
	if(triplet==false){
		cout << "No triplet found";
	}


	}}
int main(){
	int arr[] = { 0, -1, 2, -3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findTriplets(arr,n);

}
