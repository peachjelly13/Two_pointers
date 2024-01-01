//Given a sorted array and a number x task is to count pairs in an array whose sum is less than x
#include<bits/stdc++.h>
using namespace std;

void count_pairs_in_a_sorted_array_whose_sum_is_less_than_x(vector<int>&v, int n,int k){
	int left = 0;
	int right = n-1;
	int count = 0;
	while(left<right){
	if(v[left]+v[right]>=k){
		right--;
	}
	else{
		count+= right-left; //Here please make a note that we are taking the window size very important we will be considering the window size.
		left++;
	}}
	cout << count;


}	
int main(){
	vector<int>v = {1,2,3,4,5,6,7,8};
	count_pairs_in_a_sorted_array_whose_sum_is_less_than_x(v,v.size(),7);
}
