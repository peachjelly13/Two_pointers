//we have been given a sorted array like nums = [-4,-1,0,3,10] we have to do the square of this and return all the sorted values without using 
//sort fucntion in O(n) time complexity
// Why do we use two pointers here? Because this is a sorted array and two pointers wokrks under some condition a condition which can decide how my pointer
// move is helpful to us
// so here how the pointer moves is depending on the value that is larger 
// WE initilize two pointers one at end and one at the beigging and compare the values if the first is larger its stored at the last place and that is why
// we run a for loop from n-1 to 0 then the left pointer is incremented 
// if the right value is greater then the right pointer is decremented and compared with the first value again this is how it works.
// So how do we recognize two pointers is we see if there is a condition on the basis of which the pointers can be moved

#include<bits/stdc++.h>
using namespace std;
void square_of_sorted_array(vector<int>&arr, int n){
	int right = n-1;
	int left = 0;
	vector<int>v(n,1);
	for(int i =n-1;i>=0;i--){
		if(abs(arr[left])>abs(arr[right])){
				v[i] = arr[left]*arr[left];

				left++;
		}
		else{
		    v[i] = arr[right] * arr[right];
		    right--;
		 
		    }
	}
	for(int i =0;i<v.size();i++){
	cout << v[i] << " ";
	}
}
int main(){
vector<int>nums = {-4,-1,0,3,10};
square_of_sorted_array(nums,nums.size());

}

		
