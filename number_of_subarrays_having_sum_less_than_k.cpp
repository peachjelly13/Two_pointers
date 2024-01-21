#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	int k;
	cin >> k;
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	int left = 0;
	int right = 0;
	int sum = arr[0];
	int count = 0;
	while(left<n && right<n){
		if(sum<k){
			right++;
			if(right>=left){
				count+=right-left;
			}
			if(right<n){
				sum+=arr[right];
			}
		}
		else{
			sum-=arr[left];
			left++;
		}
	}
	cout << count;
}
