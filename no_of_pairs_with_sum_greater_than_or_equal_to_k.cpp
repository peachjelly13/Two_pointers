//Find the number of pairs in the array whose sum is greater than equal to k. 'k' is the fixed value provided in the input.

#include<bits/stdc++.h>
using namespace std;

void no_of_pairs_with_sum_greater_than_or_equal_to_k(vector<int>&arr, int n, int k){
	int left = 0;
	int right = n-1;
	int count = 0;
	while(left<right){
		if(arr[left]+arr[right]>=k){
			count += right-left;
			right--;
		}
		else{
			left++;
		}
	}
	cout << count;

}
int main(){
	vector<int>v = {1, 3, 7, 9, 10, 11};
	no_of_pairs_with_sum_greater_than_or_equal_to_k(v,v.size(),7);
}

