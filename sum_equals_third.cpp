//Given an array of integers, you have to find three numbers such that the sum of two elements equals the third element.
#include<bits/stdc++.h>
using namespace std;
void sum_of_two_equals_third(int arr[],int n){
        sort(arr,arr+n);
	int left;
	int right;
	for(int i =n-1;i>=0;i--){
		left = 0;
		right = i-1;
		int num = arr[i];
		while(left<right){
			if(arr[left]+arr[right]==num){
				cout << arr[left] << " " << arr[right] << " " << num << endl;

				left++;
				right--;
			}
			else if(arr[left]+arr[right]<num){
				left++;
			}
			else{
				right--;
			}



}
}
}
int main(){
    int arr[] = { 5, 32, 1, 7, 10, 50, 19, 21, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sum_of_two_equals_third(arr,n);
}
